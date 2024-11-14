// const filterGenap = (array) => {
//     return array.filter(angka => angka % 2 === 0);
// };

// one-liner lover
const filterGenap = (array) => array.filter((angka) => angka % 2 === 0);
console.log(filterGenap([1, 2, 3, 4, 5, 6])); // Output yang diharapkan: [2, 4, 6]
