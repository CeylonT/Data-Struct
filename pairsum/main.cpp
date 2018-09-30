//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    vector<int> numbers;
//    int n = 0;
//    int k = 0;
//    cin>>n>>k;
//    for (int i = 0; i<n;i++){
//        int x = 0;
//        cin>>x;
//        numbers.push_back(x);
//    }
//    for (int i=0; i<n-1; i++){
//        for (int j=i+1; j<n; j++){
//            if (numbers[i]+numbers[j]==k){
//                cout<<numbers[i]<<" + "<<numbers[j]<<" = "<<k<<endl;
//                return 0;
//            }
//        }
//    }
//    cout<<"No such pair exists"<<endl;
//    return 0;
//}


#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;
    set<int> snum;
    int n = 0;
    int k = 0;
    cin>>n>>k;
    for (int i = 0; i<n;i++){
        int x = 0;
        cin>>x;
        numbers.push_back(x);
        snum.insert(x);
    }
    for(int i=0;i<n;i++){
        if(snum.insert(k-numbers[i] != snum.end())){
            cout<<numbers[i]<<" + "<<(k-numbers[i])<<" = "<<k<<endl;
            return 0;
        }
    }
    cout<<"No such pair exists"<<endl;
    return 0;
}
