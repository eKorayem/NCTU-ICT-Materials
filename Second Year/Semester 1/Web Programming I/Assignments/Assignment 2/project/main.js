var username = sessionStorage.getItem("username");
if (username) {
    document.getElementById('text').innerHTML = `<a style="color: var(--color-user) ;" href="#">${username}</a>`;
} else {
    window.location.href = "login.html";
}


var dark = document.getElementById("dark");
            dark.onclick = function() {
            document.body.classList.toggle("dark_mode");
            }
