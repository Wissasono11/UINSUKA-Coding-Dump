var foo;

foo = "" == "0";
console.log(foo);

foo = 0 == "0";
console.log(foo);

foo = 0 == "0";
console.log(foo);

foo = false == "false";
console.log(foo);

foo = false == undefined;
console.log(foo);

foo = false == null;
console.log(foo);

foo = null == undefined;
console.log(foo);

foo = "\t\r\n" == 0;
console.log(foo);
