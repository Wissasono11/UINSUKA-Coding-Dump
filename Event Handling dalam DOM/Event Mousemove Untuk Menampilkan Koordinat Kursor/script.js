const coordinates = document.getElementById("coordinates");

document.addEventListener("mousemove", function (event) {
  coordinates.innerText = `Coordinates: ${event.clientX}, ${event.clientY}`;
});
