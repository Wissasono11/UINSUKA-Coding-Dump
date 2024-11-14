function loop(x) {
  // "x>=10" is the exit condition (equivalent to "!(x<10)")
  if (x >= 10) {
    return;
  }
  // do stuff
  loop(x + 1); // the recursive call
}
loop(0);
