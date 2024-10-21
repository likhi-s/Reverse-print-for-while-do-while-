#include<stdio.h>
int main()
{
    char X[] ={'"','H','E','L','L','O',' ','W','O','R','L','D','"'};
    char y[] ="HELLO WORLD";
        int l = sizeof X /sizeof (X[0]); //13 bytes/1 byte =13

    for(int i=l-1;i>=0;i--)//initially l=13-1=12
    {
        printf("%c",X[i]);
    }
    printf("\n");

}
