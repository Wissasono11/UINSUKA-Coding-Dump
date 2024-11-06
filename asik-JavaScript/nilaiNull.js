const name1 = { first: "Ahmad", last: null };
const name2 = { first: "DAhmad", last: undefined };

console.log(JSON.stringify(name1)); // null
console.log(JSON.stringify(name2)); // null
