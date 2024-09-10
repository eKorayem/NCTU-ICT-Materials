document.addEventListener("DOMContentLoaded", function() {
    $(document).ready(function(){
        $("#text").click(function(){
            $(".collection").toggle()
        })
    })
});

var dark = document.getElementById("dark");
            dark.onclick = function() {
            document.body.classList.toggle("dark_mode");
}