#include <iostream>

using namespace std;

int main()
{
    int h,m,t;
	scanf("%d%d%d",&h,&m,&t);
	m+=t;
	h+=m/60;
	m%=60;
	h%=24;
    printf("%02d %02d",h,m);
}
