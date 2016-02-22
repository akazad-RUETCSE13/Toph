#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

#define lld long long int

int main()
{
    int test;
    lld a,b,res;
    scanf("%d",&test);

    for(int Case=1;Case<=test;Case++)
    {
        res=0;
        scanf("%lld %lld",&a,&b);
        if(a<=23)
        {
            int i;
            for(i=a;i<=23 && i<=b ;i++)
            {
                if(!(i==1 || i==2 || i==3 || i==5 || i==6 || i==7 ||i==10 || i==11 || i==14 || i==15 || i==19 || i==23))
                    res++;
            }

            if(i>23 && i<=b)
            {
                res+=(b-23ll);
            }
            printf("%lld\n",res);
        }
        else
            printf("%lld\n",b-a+1ll);

    }

    return 0;
}
