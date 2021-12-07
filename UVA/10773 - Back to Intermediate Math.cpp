#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=1;
    float d,v,u,b,p;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%f%f%f",&d,&v,&u);
        printf("Case %d: ",c++);
        if (v>=u || v<=0 || u<=0 || d<=0)
            printf("can't determine\n");
        else
        {
            b=sqrt(u*u-v*v);
            p=(d/b)-(d/u);
            printf("%0.3f\n",p);
        }
    }
    return 0;
}
