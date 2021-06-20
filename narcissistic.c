#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int nod (int n)
{
    int t = n ;
    int  c = 0 ;
    while (t>0)
    {
        c++;
        t = t / 10 ;
    }
    return c ;
}
int nar(int n , int c)
{
    int t = n ; // Backup
    int d = 0 ;
    double s = 0.0 ;
    while (t>0)
    {
        d = t % 10 ; //Extracting Digits
        s = s + pow(d , c);
        t = t / 10 ;
    }
    if (s == n)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
    
    
}
int main(int argc, char const *argv[])
{
    system("cls");
    printf("Enter a Number \n");
    int n ;
    scanf("%d" , &n);
    int c = nod(n); // Accepting Number of Digits
    int check = nar(n , c);
    if (check == 1)
    {
        printf("%d is Narcissistic" , n);
    }
    else
    {
        printf("%d is not Narcissistic" , n);
    }
    
    return 0;
}
