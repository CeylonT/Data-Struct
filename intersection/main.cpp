#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int>a,b;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int da;
        scanf("%d",&da);
        a.push_back(da);
    }
    for(int j=0; j<m; j++){
        int db;
        scanf("%d",&db);
        vector<int>::iterator it;
        it = find(a.begin(),a.end(), db);
        if(it!=a.end()) {
            if(find(b.begin(),b.end(), db)==b.end()) b.push_back(db);
        }
    }
    sort(b.begin(),b.end());
    for (auto x:b){
        printf("%d ",x);
    }

}
