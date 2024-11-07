var foo = "Duniailkom" || "JavaScript";
console.log(foo);

var foo = "Duniailkom" && "JavaScript";
console.log(foo);

var foo = true || "JavaScript";
console.log(foo);

var foo = false || "JavaScript";
console.log(foo);

var foo = false && "JavaScript";
console.log(foo);

var foo = false || (false && true) || "JavaScript";
console.log(foo);

var foo = true || (false && true) || "JavaScript";
console.log(foo);
