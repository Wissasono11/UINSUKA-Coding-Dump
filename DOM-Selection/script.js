const header1 = document.getElementById("h1"); // element node
const p = document.getElementById("p"); // element node
const list = document.getElementsByClassName("list"); // HTMLCollection

header1.style.backgroundColor = "purple";
p[0].style.color = "Yellow";
list[0].style.color = "Blue";

const list2 = document.getSelection("li:nth-child(2)"); // element node
const anchor = document.querySelector("#a a");
list2.style.backgroundColor = "Green";
anchor.style.fontSize = "40px";
