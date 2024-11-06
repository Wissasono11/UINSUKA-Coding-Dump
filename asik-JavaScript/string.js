// // string
// "Ini merupakan contoh string di JavaScript";
// "Ini merupakan contoh string di JavaScript";
// `Ini merupakan contoh string di JavaScript`;

// ("Baris pertama.\nBaris kedua.");
// ("Baris pertama.\nBaris kedua.");
// `Baris pertama.
// Baris kedua.`;

// const currentYear = new Date().getFullYear();
// const text = `Sekarang adalah tahun ${currentYear}`;

// console.log(text); // Sekarang adalah tahun 2024

// // number
// 40;
// 3.14;
// 5;
// 3.333;

// const result = 50 / 0;
// console.log(result); // Infinity

// const result = Number("Chalisun");
// console.log(result); // NaN

// // boolean
// const completed = true;
// const passed = false;
// console.log(completed, passed); // true false

// const isGreater = 5 > 2;
// console.log(isGreater); // true

// // null
// let message = null;
// console.log(message); // null

// let message;
// console.log(message); // undefined

// let message = undefined;
// console.log(message); // undefined

// // mengubah nilai antara tipe data
// // mengubah ke string secara eksplisit
// const number = 123;
// const boolean = true;

// const strNumber = String(number);
// const strBoolean = boolean.toString();

// console.log(strNumber); // "123"
// console.log(strBoolean); // "true"

// console.log(typeof strNumber); // string
// console.log(typeof strBoolean); // string

// // mengubah ke number secara eksplisit
// const strNumber = "123";
// const strFloat = "3.14";
// const boolean = true;

// const numFromString = Number(strNumber);
// const floatFromString = Number(strFloat);
// const numFromBoolean = Number(boolean);

// console.log(numFromString); // 123
// console.log(floatFromString); // 3.14

// console.log(typeof numFromString); // number
// console.log(typeof floatFromString); // number

// // mengubah ke boolean secara eksplisit
// const number = 123;
// const string = "Dicoding";
// const empty = null;

// const boolFromNumber = Boolean(123);
// const boolFromString = Boolean(string);
// const boolFromEmpty = Boolean(empty);

// console.log(boolFromNumber); // true
// console.log(boolFromString); // true
// console.log(boolFromEmpty); // false

// // mengubah number ke string secara implisit
// const age = 20;
// const message = "Umurku: " + age;
// console.log(message); // "Umurku: 20"

// jika menggunakan operator * pada string dan num
// const strNumber = "123";
// const result = strNumber * 2;

// console.log(result); // 246

// jika menggunakan operator + pada num dan bool
const bool = true;
const result = 1 + bool;

console.log(result); // 2
