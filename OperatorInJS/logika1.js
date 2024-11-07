var foo;

foo = true && false;
console.log(foo);

foo = true || false;
console.log(foo);

foo = !false;
console.log(foo);

foo = true || (true && false);
console.log(foo);

foo = (false && true) || true;
console.log(foo);
