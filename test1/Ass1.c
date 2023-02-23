# include <stdio.h>
# include <math.h>
int main()
{
    int i,j;
    double s;
    printf("Please enter the value of i:\n");
    scanf("%d",&i);
    double pi=M_PI;
    for(j=0;j<=i;j++)
    {
        double frac= (j*2.0)/i;
        s=sin(frac*pi);
        printf("sin( %lf pi)=%lf\n",frac,s);

    }

  
}
