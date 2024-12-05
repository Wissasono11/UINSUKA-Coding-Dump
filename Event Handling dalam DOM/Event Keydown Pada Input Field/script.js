const inputField = document.getElementById("inputField");
const displayText = document.getElementById("displayText");

inputField.addEventListener("keydown", function (event) {
  displayText.textContent = event.target.value;
});
