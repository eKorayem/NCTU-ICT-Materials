document.getElementById("loginForm").addEventListener("submit", function(event)
{
    event.preventDefault();
    
    var username = document.getElementById("username").value;
    var password = document.getElementById("password").value;
    let login = document.getElementById()
    
    if (username === "user1" && password === "123456") {
      window.location.href = "MainPage.html";
      const user = "eslam";
      document.getElementById("text").innerHTML = "loog";
    }
    else if (username === "user2" && password === "1234567"){
      window.location.href = "MainPage.html";
    }
    else {
      alert("Invalid username or password. Please try again.");
    }

  });

