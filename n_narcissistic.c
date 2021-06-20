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
    printf("Enter Number of NArcissistic Number \n");
    int n ;
    scanf("%d" , &n);
    int orig = 1 ;
    for(int i = 1 ; i <= n ;)
    {
        int digits = nod(orig);
        int check = nar(orig,digits);
        if (check ==  1)
        {
            printf("%d  Number %d \n" , orig , i);
            orig++;
            i++;
        }
        else
        {
            orig++;
        }
        
    }
    return 0;
}
