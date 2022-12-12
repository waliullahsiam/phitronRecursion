#include<stdio.h>


int fun(int dummy[],int n)
{
    if(n==0)
    {
        return 0;
    }

    int summ=*dummy+fun(dummy+1,n-1);

    return summ;

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    int dummy[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    for(int i=0; i<n; i++)
    {
        dummy[i]=arr[i]%10;

    }


    int sum=fun(dummy,n);

    printf("%d\n",sum);






}
