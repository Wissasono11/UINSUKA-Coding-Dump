const button = document.getElementById("myButton");
const messageText = document.getElementById("messageText");

button.addEventListener("mouseover", function () {
  messageText.textContent = "Mouse is over the button!";
});

button.addEventListener("mouseout", function () {
  messageText.textContent = "";
});
