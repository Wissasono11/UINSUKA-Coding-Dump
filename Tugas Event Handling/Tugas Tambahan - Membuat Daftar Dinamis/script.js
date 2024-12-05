document.addEventListener("DOMContentLoaded", () => {
  const itemInput = document.getElementById("itemInput");
  const addButton = document.getElementById("addButton");
  const itemList = document.getElementById("itemList");

  addButton.addEventListener("click", () => {
    const text = itemInput.value.trim();
    if (text) {
      const li = document.createElement("li");
      li.textContent = text;
      itemList.appendChild(li);
      itemInput.value = "";
    }
  });

  itemInput.addEventListener("keypress", (e) => {
    if (e.key === "Enter") {
      addButton.click();
    }
  });
});
