#include <bits/stdc++.h>

using namespace std;

int main()
{
    int carry;
    int a,b, ans;

    while(scanf("%d %d", &a, &b))
    {
        if(!a && !b) break;
        ans = 0;


        carry = 0;
        while(1)
        {
            int tmpA = a%10;
            int tmpB = b%10;

            if(tmpA + tmpB + carry >= 10 )
            {
                carry = (tmpA + tmpB + carry)/10;
            }
            else
                carry = 0;

            if(carry) ans++;
            a/=10;
            b/=10;

            //if(carry == 1)
              //  ans++;
            if(a == 0 && b == 0)
                break;
        }

        if(ans == 0)
            printf("No carry operation.\n");
        else if(ans == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", ans);

    }
return 0;
}
