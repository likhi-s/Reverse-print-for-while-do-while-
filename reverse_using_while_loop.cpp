#include<stdio.h>
int main()
{
    char X[] ={'"','H','E','L','L','O',' ','W','O','R','L','D','"'};
    int l = sizeof X /sizeof (X[0]);
    int i=l-1;

    while(i>=0)
    {
        printf("%c",X[i]);
        i--;
    }
    printf("\n");

}
