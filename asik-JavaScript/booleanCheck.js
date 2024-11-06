const number = 123;
const string = "Dicoding";
const empty = null;

const boolFromNum = Boolean(123);
const boolFromStr = Boolean(string);
const boolFromNull = Boolean(empty);

console.log(boolFromNum); // true
console.log(typeof boolFromNum); // boolean

console.log(boolFromStr); // true
console.log(typeof boolFromStr); // boolean

console.log(boolFromNull); // false
console.log(typeof boolFromNull); // boolean
