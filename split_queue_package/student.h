#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::vector<CP::queue<T> > qs(k);
    int x = 0;
    int sq = size();
    for(int i=0; i<sq; i++){
        qs[x].push(front());
        pop();
        x = (x<(k-1)) ? x+1 : 0;
    }
    return qs;
}

#endif

