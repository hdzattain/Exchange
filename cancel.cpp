void cancel(int ci) {
  int oi = orderIndice[ci];
  if(canceled[oi]) return;
  const Order& o = orders[oi];
  if(o.buy) buyQueue.erase(oi);
  else sellQueue.erase.erase(oi);
  canceled[oi] = 1;
}
