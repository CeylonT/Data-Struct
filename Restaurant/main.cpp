#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, t, ct, q;
    vector<int> cos;
    scanf("%d%d",&n,&m);
    for (int i=0; i<n; i++){
        scanf("%d",&t);
        cos.push_back(t);
    }
    ct = 0;
    q = 0;
    while (q<m){
        for (int j=0; j<cos.size(); j++){
            if (cos[j]==0){
                for (int k=0; k<m-q; k++) printf("0\n");
                q += m-q;
                break;
            }
            if (ct%cos[j]==0){
                if (q<m){
                    q += 1;
                    printf("%d\n",ct);
                } else break;
            }
        }
        ct+=1;
    }
}
