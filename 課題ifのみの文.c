#include <stdio.h>

int main(void)
{
    int Ichiro, Jiro, Saburo;
    
    Ichiro = 170;   //一郎の身長
    Jiro = 180;     //次郎の身長
    Saburo = 170;   //三郎の身長
    
    //変数と定数の比較
    if(Ichiro == 170)
        printf("一郎の身長は170cmです\n");
    if(Jiro != 170)
        printf("次郎の身長は170cmではありません\n");
    if(Jiro >= 170)
        printf("次郎の身長は170cm以上です\n");
    if(Ichiro < 170)
        printf("一郎の身長は170cm未満です\n") ;
    
    
    //変数と変数の比較
    if(Ichiro > Jiro)
        printf("一郎は次郎より慎重が高いです\n");
    if(Jiro > Ichiro)
        printf("次郎は一郎より慎重が高いです\n");
    
    
    return 0;
}