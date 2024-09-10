<html>
    <head>
        <title>StudyRooms</title>
        <link rel="stylesheet" href="newcss.css">
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Alfa+Slab+One&family=DM+Sans:wght@400;500&family=Roboto:ital,wght@1,300&family=Sen&family=Tilt+Neon&display=swap" rel="stylesheet">
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />        
        <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@24,400,0,0" /><link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Outlined:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
    </head>


    </script>
    <body>
        <div class="nav-bar">
    
            <a class="logo" href="MainPage.html">
            <span class="material-symbols-outlined"
            style="font-size: 40px; margin-right: 10px;">
                school
                </span>
            <span style="color: white;">StudyRooms</span>
            </a>
          <div class="profile_">  
            <a class="profile" href="#">
                <span class="material-symbols-outlined"
                style="font-size: 34px; padding-right: 10px;">
                    account_circle
                    </span>

                <p> Login
                   
                </p> 
                <span class="material-symbols-outlined" style="padding-left: 15px ; cursor: pointer; color: var(--color-main-light); " id="dark">
                    light_mode
                  </span>
            </a> 
            
            </div>
        </div>
    </header>
        <section class="login">
            <form id="loginForm" method="post" action="login.php" class="login2">
                <h2>LOGIN</h2>
                <label style="margin-bottom: 10px;">Username</label>
                <br>
                <input class="Username" id="username" name="username" type="text" required autofocus placeholder="Enter Your Username">
                <br>
                <label>Password</label>
                <br>
                <input class="password" id="password" type="password" name="password" required placeholder="Enter Password" minlength="6" maxlength="16">
                <br>
                <br>
                <input type="submit" value="Login" class="login-button">
                
            </form>
        </section>
        
    </body>
    <script src="login.js"></script>
</html>