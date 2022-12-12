#include<stdio.h>

int fun(int n,int m)
{
    if(m==0)
    {
        return 1;
    }

    int power=n*fun(n,m-1);

    return power;



}
int main()
{

    int n,m;

    scanf("%d%d",&n,&m);

    int res=fun(n,m);

    printf("%d\n",res);
    
    return 0;




}
