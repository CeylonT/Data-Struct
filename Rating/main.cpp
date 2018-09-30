#include <iostream>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    cout << std::fixed << std::setprecision(2);

    int n;
    cin >> n;

    map<string,vector<int>> ss;
    map<string,vector<int>> tt;

    for (int i=0; i<n; i++){
        string s, t;
        int score;
        cin >>s>>t>>score;
        ss[s].push_back(score);
        tt[t].push_back(score);
    }

    for (auto x:ss){
        int sum = 0;
        for (auto y:x.second){
            sum+= y;
        }
        int num = x.second.size();
        cout << x.first <<" "<< (sum+0.0)/num<< "\n";
    }

    for (auto x:tt){
        int sum = 0;
        for (auto y:x.second){
            sum+= y;
        }
        int num = x.second.size();
        cout << x.first <<" "<< (sum+0.0)/num<< "\n";
    }

}
