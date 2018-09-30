#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(K!=0){
    K--;
    if (empty()!=true) pop();
    else break;
  }

}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::vector<int> vs;
  std::stack<int> ns;
  while(K!=0){
    K--;
    if (empty()!=true) {
        int data = top();
        vs.insert(vs.begin(),data);
        pop();
    } else break;
  }
  for (int i; i<vs.size(); i++){
    ns.push(vs[i]);
  }
  return ns;
}

#endif
