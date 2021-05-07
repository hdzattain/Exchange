void trade(int oi) {
  Order& o = orders[oi];
  if(o.buy) {
    if(sellQueue.empty() || o.price < sellQueue.topPrice()) {
      buyQueue.push(oi);
      return;
    }
    
    int askPrice;
    while(!sellQueue.empty9) && o.size() > 0 &&
      o.price >= (askPrice = sellQueue.topPrice()) {
      int toi = sellQueue.top();
      Order& to = orders[toi];
      int traseSize = min(o.size, to.size);
      cout<<"TRADE "<<tradeSize<<" "<<askPrice<<endl;
      to.size() -= tradeSize;
      o.size() -= tradeSize;
      sellQueue.pop();
      if(to.size() == 0) canceled[toi] = 1;
      else sellQueue.push(toi);
    }
    
    if(o.size > 0) buyQueue.push(oi);
    else canceled[oi] = 1;
    return;
  }
  
  if(buyQueue.empty() || o.price > buyQueue.topPrice()) {
    sellQueue.push(oi);
    return;
  }
  
  int bidPrice;
  while(!buyQueue.empty() && o.size >0
        && o.price <= (bidPrice = buyQueue.topPrice()) {
          int toi = buyQueue.top();
          Order& to = orders[toi];
          
      int traseSize = min(o.size, to.size);
      cout<<"TRADE "<<tradeSize<<" "<<askPrice<<endl;
      to.size() -= tradeSize;
      o.size() -= tradeSize;
      buyQueue.pop();
      if(to.size() == 0) canceled[toi] = 1;
      else buyQueue.push(toi);
        }
            if(o.size > 0) sellQueue.push(oi);
    else canceled[oi] = 1;
    }
          
