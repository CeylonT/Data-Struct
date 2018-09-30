#include <iostream>
#include <vector>
#include <stack>

using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2) {
 //write your code only in this function
    vector<int> vs1;
    vector<int> vs2;
    while(s2.empty()!=true){
        int data2 = s2.top(); s2.pop();
        vs2.insert(vs2.begin(), data2);
    }
    while(s1.empty()!=true){
        int data1 = s1.top(); s1.pop();
        vs1.insert(vs1.begin(), data1);
    }
    for (int k=0; k<vs2.size(); k++){
        s1.push(vs2[k]);
    }
    for (int l=0; l<vs1.size(); l++){
        s1.push(vs1[l]);
    }
}
int main() {
    //read input
    int n,m;
    int c;
    cin >> n >> m;
    stack<int> s1,s2;
    for (int i = 0;i < n;i++) {
        cin >> c;
        s1.push(c);
    }
    for (int i = 0;i < m;i++) {
        cin >> c;
        s2.push(c);
    }
    //call the function
    stack_concat(s1,s2);
    //display content of the stack
    cout << "S1 has " << s1.size() << endl;
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    //display content of the stack
    cout << "S2 has " << s2.size() << endl;
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
}
