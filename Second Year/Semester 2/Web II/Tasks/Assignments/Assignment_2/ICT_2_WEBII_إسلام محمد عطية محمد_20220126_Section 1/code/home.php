<?php

session_start();

if (isset($_SESSION['id']) && isset($_SESSION['username'])){
?>
<html>
    <head>
        <title>StudyRooms</title>
        <link rel="stylesheet" href="newcss.css">
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Alfa+Slab+One&family=DM+Sans:wght@400;500&family=Roboto:ital,wght@1,300&family=Sen&family=Tilt+Neon&display=swap" rel="stylesheet">
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />        
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" /><link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
    </head>
    
    <body>
        <header class="head">
            <div class="nav-bar">
                <a class="logo" href="#">
                <span class="material-symbols-outlined"
                style="font-size: 40px; margin-right: 10px;   animation-name: transform;
                animation-duration: 0.5s;
                animation-delay: 0.3s;">
                    school
                    </span>
                <span style="color: white;">StudyRooms</span>
                </a>
             
                <form method="get" class="search">
                    <span style="color: var(--color-gray);" class="material-symbols-outlined">
                        search
                    </span>
                    <input type="search" placeholder="search for rooms">
                </form>
              <div class="profile_">  
                <a class="profile" href="#">
                    <span class="material-symbols-outlined"
                    style="font-size: 34px; padding-right: 10px;">
                        account_circle
                        </span>
                    <a id="text" href="#" style="padding-right: 20px; color: var(--color-main);"> <?php  echo $_SESSION['username']?>  
                        <span class="user"></span>

                    </a>
                    <span class="collection" style=" display: none;">
                            <a href="#">Profile</a>
                            <hr>
                            <a href="#">Logout</a>
                    </span> 
                </a> 
                <p class="logout" >
                 <a href="logout.php"> <span class="material-symbols-outlined" style="padding-left: 15px ; cursor: pointer; color: white;">
                    logout
                  </span> </a>
                <span class="material-symbols-outlined" style="padding-left: 15px ; cursor: pointer; color: white;" id="dark">
                  light_mode
                </span>
              </p>
                </div>
            </div>
        </header>

            <?php 
                    include "db_conn.php";
                    $sql = "SELECT * FROM rooms";

                    $result = mysqli_query($conn, $sql);
                    $count = mysqli_num_rows($result);
            ?>


            <div style="margin-top: 30px;" class="home_body">
                <div class="topics">
                    <h3 style="margin-bottom: 10px; color: #696d97;">BROWSE TOPICS</h3> 
                    <ul class="topics_list">
                        <li><a href="#" class="active">All<span><?php echo $count?></span></a></li>
                        <?php 
                            $topicsql = "SELECT topic,COUNT(*) as count FROM rooms GROUP BY topic";

                            $topicresult = mysqli_query($conn, $topicsql);
                            $topiccount = mysqli_num_rows($topicresult);
                            if ($topiccount > 0){
                                while($topic = mysqli_fetch_assoc($topicresult)){
                        ?>

                        <li><a href="#"><?php echo $topic['topic']?><span><?php echo $topic['count']?></span></a></li> 

                        <?php 
                                }
                            }
                        ?>
                    </ul>
                </div>
            
                <div class="rooms">
                    <div class="rooms_header">
                        <div>
                            <h3 style="margin-bottom: 10px; color: var(--color-main-light);">STUDY ROOM</h3> 
                            <h4 style="margin-bottom: 10px; color: #696d97;"><?php echo $count?> Rooms available</h4> 
                        </div>
                        <a class="btn" href="#">
                            <span class="material-symbols-outlined">
                                add_circle
                            </span>
                            Create Room
                        </a>
                </div>
            <?php
                    if ($count > 0){
                        while($row = mysqli_fetch_assoc($result)){
                            $sql2 = "SELECT * FROM users where user_id = '".$row['user_id']."'";

                            $result2 = mysqli_query($conn, $sql2);
                            $count2 = mysqli_num_rows($result2);
                            $row2 = "";
                            if ($count2 === 1){
                                $row2 = mysqli_fetch_assoc($result2);
                            }
            ?>
                <div class="room" style="animation-delay: 0s;">
                    <div class="room_header">
                        <a href="#" class="room_author">
                        <span class="material-symbols-outlined"
                        style="font-size: 34px; padding-right: 10px; color: white;">
                            account_circle
                        </span>
                        <span style="color: white;">@<?php  echo $row2['username']?></span>
                        </a>

                    </div>
                    <div style="margin: 20px 0;" class="room_content">
                        <a href="#"><?php echo $row['content'] ?></a>
                    </div>
                    <div class="room_foter">
                        <div >
                        <a href="#"><p class="room_topic"><?php echo $row['topic'] ?></p></a>
                            
                       
                       
                        </div>
                    </div>
                </div>
            <?php
                        }
                    } 
            ?>
            </div>
            <div class="activities"></div>        
        </div>
           
    </body>
    <script src="main.js"></script>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
<script>

</script>
</html>

<?php
}


?>