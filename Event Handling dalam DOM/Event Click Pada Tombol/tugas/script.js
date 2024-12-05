const button = document.getElementById("tombol");
const paragraf = document.getElementById("paragraf");
let isBlue = false; // Track color state

button.addEventListener("click", function () {
  isBlue = !isBlue; // Toggle color state
  paragraf.style.color = isBlue ? "blue" : "black"; // Switch between colors
});
