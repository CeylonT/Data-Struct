#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  if(size()<k) k = size();
  for(int i=0; i<k; i++){
    res.push_back(mData[mFront+i]);
  }
  //write your code only here
  //
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  int cap = 1;
  mData = new T[cap]();
  mCap = cap;
  mSize = 0;
  mFront = 0;
  for (auto i = 0; i < to-from;i++) {
    push(*(from+i));
  }
}

#endif
