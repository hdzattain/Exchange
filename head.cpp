using namespace std;
strcut Order {
  bool buy;
  int size, price;
};

ostream& operator<<(ostream& os, const Order& o)
{ return os<<"("<<o.price<<","<<o.size<<")"; }

const int MAXN = 10000 + 10;

int n, orderIndice[MAXN], canceled[MAXN];
vector<Order> orders;

template<typename Compare>
struct OrderQueue {
  typedef set<int, Compare> _IntSet;
  _IntSet eles;
  void erase(int x) { eles.erase(eles.find(x)); }
  bool empty() const { return eles.empty(); }
  int top() const { return *eles.begin(); }
  int pop() {
    int ans = *eles.begin();
    eles.erase(eles.begin());
    return ans;
  }
  void push(int oi) { eles.insert(oi); }
  int size() const { return eles.size(); }
  void clear() { eles.clear(); }
  int topPrice() { return orders[top()].price; }
  int topSize() {
    int tp = topPrice(), ans = 0;
    for(typename _IntSet::iterator it = eles.begin(); it != eles.end();
    it++) {
        const Order& o = orders[*it];
        if(o.price == tp) ans += o.size;
        else break;
      }
      return ans;
    }
  };
