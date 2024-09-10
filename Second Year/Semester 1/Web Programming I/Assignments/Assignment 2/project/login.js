
document.getElementById("loginForm").addEventListener("submit", function(event) {
    event.preventDefault();
    
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    
    if (username === "user1" && password === "123456") {
        sessionStorage.setItem("username", "user1");
        window.location.href = "MainPage.html";
    }
    else if (username === "user2" && password === "1234567") {
        sessionStorage.setItem("username", "user2");
        window.location.href = "MainPage.html";
    }
    else {
        alert("Invalid username or password. Please try again.");
    }
  });


  
  var dark = document.getElementById("dark");
            dark.onclick = function() {
            document.body.classList.toggle("dark_mode");
            }