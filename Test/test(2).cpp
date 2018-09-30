#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<float> vf;
    float f = 0.0f;
    count<<"Please enter numbers (-1 to end) : ";
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
