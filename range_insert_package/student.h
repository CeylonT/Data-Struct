#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
    CP::vector<T> sol;
    for(auto i=begin(); i<position; i++){
        sol.push_back(*i);
    }
    for(auto i=first; i<last; i++){
        sol.push_back(*i);
    }
    for(auto i=position; i<end(); i++){
        sol.push_back(*i);
    }
    *this = sol;
}

#endif
