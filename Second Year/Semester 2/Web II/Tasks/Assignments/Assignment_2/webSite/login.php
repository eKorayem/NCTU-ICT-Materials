<?php

    session_start();
    include "db_conn.php";

    if (isset($_POST['username']) && isset($_POST['password'])){
        function validate($data){
            $data = trim($data);
            $data = stripslashes($data);
            return $data;
        }
    }

    $username = validate($_POST['username']);
    $password = validate($_POST['password']);

    if (empty($username)){
        header("Location: index.php");
        exit();
    }
    else if (empty($password)){
        header("Location: index.php");
        exit();
    }

    $sql = "SELECT * FROM users WHERE username='$username' AND password='$password'";
    
    $result = mysqli_query($conn, $sql);

    if (mysqli_num_rows($result) === 1){
        $row = mysqli_fetch_assoc($result);
        if ($row['username'] === $username && $row['password'] === $password){
            echo "Logged In!";
            $_SESSION['username'] = $row['username'];
            $_SESSION['name'] = $row['fullname'];
            $_SESSION['id'] = $row['user_id'];
            header("Location: home.php");
            exit();
        }
        else {
            header("Location: index.php");
            exit();
        }
    }
    else {
        header("Location: index.php");
        exit();
    }







?>