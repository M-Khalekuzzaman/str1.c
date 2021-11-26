#include<stdio.h>
int main()
{
    char name1[30];
    printf("Enter your name : ");
    gets(name1);
    int vow =  0,cons = 0,digit = 0 ;
    char name2[30];
    int len = strlen(name1);
    for(int i =0 ; i<len ;i++)
    {
       name2[i] =  toupper(name1[i]);
    }

    for(int i =0 ; i<len ; i++)
    {

        if(name2[i] == 'A' || name2[i] =='E' ||name2[i] =='I'||name2[i] =='O' ||name2[i] =='U')
            vow++;

        else
            cons++;
        switch(name2[i])
       {
           case '0' :
               digit ++;
               break;
           case '1' :
               digit ++;
               break;
           case '2' :
               digit ++;
               break;
       }

    }
    printf("Number of vowel : %d\n",vow);
    printf("Number of consonate : %d\n",cons-digit);
    printf("Number of digit : %d\n",digit);

    getch();
}
