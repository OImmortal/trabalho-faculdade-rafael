let x = 10; // variável global

function f() {
  console.log("x em f():", x);
}

function g() {
  let x = 20; // variável local em g()
  f(); // chamada de f()
}

g();
