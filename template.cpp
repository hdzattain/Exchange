template<typename T>
ostream& operator<<(ostream& os, const OrderQueue<T> oq) {
  if(oq.eles.empty()) os<<"[]";
  for(typename OrderQueue<T>::_IntSet::iterator it = oq.eles.begin();
      it != oq.eles.end(); it++)
    os<<orders[*it];
  return os;
}
