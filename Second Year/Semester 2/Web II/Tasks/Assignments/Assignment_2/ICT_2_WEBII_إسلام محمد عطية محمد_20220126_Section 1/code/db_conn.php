<?php
$server = "localhost";
$username = "root";
$password = "";
$database = "studyrooms";

$conn = mysqli_connect($server, $username, $password, $database);

if (!$conn) {
    echo "Connection failed: " . mysqli_connect_error();
}
?>