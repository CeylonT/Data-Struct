#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    stack<int> num;
    for (auto x:v){
        if(x.first==1){
            num.push(x.second);
        } else {
            int fn = num.top();
            num.pop();
            int sn = num.top();
            num.pop();
            if(x.second==0){
                num.push(fn+sn);
            }
            else if(x.second==1){
                num.push(sn-fn);
            }
            else if(x.second==2){
                num.push(fn*sn);
            }
            else if(x.second==3){
                num.push(sn/fn);
            }
        }
    }
    return num.top();
}

#endif
