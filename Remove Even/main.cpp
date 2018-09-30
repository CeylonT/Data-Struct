#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
    //write your code only in this function
    vector<int> nv;
    int c =0;
    for(int i=0; i<a; i++){
        c+=1;
        nv.push_back(v[i]);
    }
    for(int i=a; i<b+1; i++){
        if (c%2==1) nv.push_back(v[i]);
        c+=1;
    }
    for(int i=b+1; i<v.size(); i++){
        nv.push_back(v[i]);
    }
    v = nv;
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    remove_even(v,a,b);
    //display content of the vector
    for (auto &x : v) {
    cout << x << " ";
    }
    cout << endl;
}
