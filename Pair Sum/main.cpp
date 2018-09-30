#include <iostream>
#include <algorithm>
#include <vector>
int check[1000005];
using namespace std;
vector <int> ne;
int main()
{
    int n;
    int m;
    scanf("%d %d",&n ,&m);
    for(int i = 0; i < n; i++){
        int num;
        scanf( "%d", &num);
        ne.push_back(num);
        check[num] = 1;
    }
    for(int j = 0; j < m; j++){
        int numm;
        scanf( "%d", &numm);
        bool checkAns = true;
        for(int i = 0; i < n; i++){
            int ans;
            ans = numm - ne[i];
            if(check[ans] == 1){
                printf("YES\n");
                checkAns = false;
                break;
            } else {
                continue;
            }
        }
        if (checkAns) {
            printf("NO\n");
        }
    }
}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    int m;
//    vector <int> ne;
//    scanf("%d %d",&n ,&m);
//    for(int i = 0; i < n; i++){
//        int num;
//        scanf( "%d", &num);
//        ne.push_back(num);
//    }
//    for(int j = 0; j < m; j++){
//        int num;
//        scanf( "%d", &num);
//        bool check = true;
//        for(int i = 0; i < n; i++){
//            int ans;
//            ans = num - ne[i];
//            if(find(ne.begin(), ne.end(), ans) != ne.end()){
//                printf("YES\n");
//                check = false;
//                break;
//            } else {
//                continue;
//            }
//        }
//        if (check) {
//            printf("NO\n");
//        }
//    }
//}
