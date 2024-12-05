const hoverText = document.getElementById("hoverText");

hoverText.addEventListener("mouseover", function () {
  hoverText.style.backgroundColor = "yellow";
});

hoverText.addEventListener("mouseout", function () {
  hoverText.style.backgroundColor = "";
});
