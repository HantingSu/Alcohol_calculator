#include<stdio.h>
#include<stdlib.h>

int main(void){
    char type[10];
    int flag=0;
    char need;
    double ml,ml_c,ctt,ctt_c,alc,hei; //cct=cotent,hei=heineken
do{
    printf("**********************************\n");
printf("*A:how much alcohol I drank:     *\n*B:X equals how much Y I drank?  *\n**********************************\nEnter what you need:");
    scanf("%c",&need);
switch(need){
    fflush(stdin);
    case 'a':
    case 'A':
        printf("How much did you drink(ml):" );
            scanf("%lf",&ml);
        printf("Please enter the alcohol content of this drink as a percentage(0.001~100):");
            scanf("%lf",&ctt);
        alc = ml * (ctt/100);
        hei= (alc/0.05)/500;
        printf("You drank %.2fml of pure alcohol\n",alc);
        printf("Approximately equal to %.2f 500ml bottles of Heineken.\n",hei);
        fflush(stdin);
        getchar();
        system("clear");
        break;
    case 'b':
    case 'B':
    printf("How much did you drink(ml):");
        scanf("%lf",&ml);
    printf("Please enter the alcohol content of this drink as a percentage (0.001~100)");
        scanf("%lf",&ctt);
    printf("Enter the type of alcohol and alcohol content you would like to convert\nType:");
    scanf("%s",type);
    printf("ABV:");
    scanf("%lf",&ctt_c);
   alc =ml*(ctt/100);
   ml_c=(alc/ctt_c);
    printf("That's equivalent to drinking %.2fml of %s.\n",ml_c,type);
        fflush(stdin);
        getchar();
        system("clear");
    break;
    case 'Q':
    case 'q':
    flag =1;
    break;
    default:
    printf("WTF???\n");
        fflush(stdin);
        getchar();
        system("clear");
}
fflush(stdin);
}while(flag != 1);
printf("Goodbye, don't get drunk~\n");
        
        fflush(stdin);
        getchar();
        system("clear");
        
return 0;
}
