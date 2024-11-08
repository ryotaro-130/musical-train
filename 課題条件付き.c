#include <stdio.h>

int main()
{
        int k;
        int l;
        int a;
        printf("小説を何冊買いましたか?");
        scanf("%d",&k);
        printf("漫画を何冊買いましたか?");
        scanf("%d",&l);  
         a=k+l;
        if (a >=30)
        {
            printf("買いすぎです");
        }
        
        else if(a >=7)
        {
            printf("少し多いですね");
        }
        
        else 
        {
            printf("ちょうどいいですね～");
        }
}
