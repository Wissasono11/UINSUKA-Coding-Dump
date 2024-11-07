const a = 10;
const b = 20;
const c = 30;

const isAGreaterThanB = a > b; // false
const isBLessThanC = b < c; // true

const andOperation = isAGreaterThanB && isBLessThanC; // false
const orOperation = isAGreaterThanB || isBLessThanC; // true
const notOperation = !isAGreaterThanB; // true

console.log(`Hasil dari ${a} > ${b} && ${b} < ${c} adalah ${andOperation}`);
console.log(`Hasil dari ${a} > ${b} || ${b} < ${c} adalah ${orOperation}`);
console.log(`Hasil dari !(${a} > ${b}) adalah ${notOperation}`);
