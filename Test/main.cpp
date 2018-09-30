/*
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.pop_back();
    v.push_back(7);
    v.push_back(9);
    //v.size();
    for(auto x:v){
        cout << x << endl;
    }
    for(unsigned int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    for(vector<int>::iterator it=v.begin();it<v.end();it++){
        cout << *it << endl;
    }
}
*/

/*
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<float> vf;
    float f = 0.0f;
    cout<<"Please enter numbers (-1 to end) : ";
    do {
        cin>>f;
        if (f!= -1.0f){
            vf.push_back(f);
        }
    } while (f!=-1.0f);

    float minf = vf[0];
    float maxf = vf[0];
    float meanf = vf[0];
    for (int i = 0; i<(int)vf.size();i++){
        if (vf[i]<minf) minf = vf[i];
        if (vf[i]<maxf) maxf = vf[i];
        meanf += vf[i];
    }
    meanf /= vf.size();
    cout<<

*/


//#include <vector>
//#include <pair>
//#include <string>
//using namespace std;
//int main() {
//    pair<string, int>age;
//    age.first = "Somchai";
//    age.second = 58;
