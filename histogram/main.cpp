#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >>n;

    map<string,int> data;

    for (int i=0; i<n; i++){
        string d;
        cin>>d;
        data[d] += 1;
    }
    for (auto x:data){
        if(x.second>1) cout<<x.first<<" "<<x.second<<"\n";
    }
}
