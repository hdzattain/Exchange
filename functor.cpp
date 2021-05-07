struct BuyOrderCompare {
  bool operator() (int i, int j) {
    const Order& oi = orders[i];
    const Order& oj = orders[j];
    return oi.price > oj.price || (oi.price == oj.price && i < j);
  }
};
struct SellOrderCompare {
  bool operator() (int i, int j) {
    const Order& oi = orders[i];
    const Order& oj = orders[j];
    return oi.price < oj.price || (oi.price == oj.price && i < j);
  }
};

OrderQueue<BuyOrderCompare> buyQueue;
OrderQueue<SellOrderCompare> sellQueue;

