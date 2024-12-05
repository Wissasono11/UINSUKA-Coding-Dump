const form = document.getElementById("myForm");
const nameField = document.getElementById("nameField");
const errorMessage = document.getElementById("errorMessage");

form.addEventListener("submit", function (event) {
  if (nameField.value === "") {
    errorMessage.textContent = "Name field cannot be empty!";
    event.preventDefault();
  } else {
    errorMessage.textContent = "";
    alert(`Form submitted with name: ${nameField.value}`);
  }
});
