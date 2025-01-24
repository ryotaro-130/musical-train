#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
   
    srand(time(0));
    
    int intel = (rand()% 21) ;
    
    int stamina = (rand()% (21-intel));
    printf("%d\n",intel);
    printf("%d\n",stamina);
    
    int charisma = 20-intel-stamina;
    printf("%d\n",charisma);
    
    if (intel>stamina && intel>charisma)
    {
    printf("mage、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",intel,stamina,charisma);
    }
    if (stamina>intel && stamina>charisma)
    {
    printf("knight、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",intel,stamina,charisma);
    }
    if (charisma>intel && charisma>stamina)
    {
    printf("thief、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",intel,stamina,charisma);
    }
    
    if (intel==stamina && intel>charisma)
    {
    printf("balancerA、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",intel,stamina,charisma);
    }
    if (intel==charisma && intel>stamina)
    {
    printf("balancerB、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",intel,stamina,charisma);
    }
    if (charisma==stamina && charisma>intel)
    {
    printf("barancerC、スタッツの結果はintelligence:%d,stamina:%d,charisma:%d",intel,stamina,charisma);
    }
    


    return 0;
}