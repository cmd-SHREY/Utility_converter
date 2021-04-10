#include <stdio.h>
int main(){
int N1;
double km,In,P;
printf("To select the conversion press the corrosponding number\n");
printf("1. Kms to Miles\n2. Inches to Foot\n3. Pound to kgs\n4. Inches to meters\n ");
scanf("%d",&N1);

switch (N1)
{
case (1): 
    printf("Enter the kilometer value\n");
    scanf("%lf",&km);
    printf("%.2lf miles",km*0.62);
    break;

case (2): 
    printf("Enter the inches\n");
    scanf("%lf",&In);
    printf("%.3lf feet",In*0.083);
    break;

    case (3): 
    printf("Enter the pound value\n");
    scanf("%lf",&P);
    printf("%.2lf kilograms\n",P*0.453);
    break;

    case (4): 
    printf("Enter the value in inches\n");
    scanf("%lf",&In);
    printf("%.2lf meters",In*0.025);
    break;
default:printf("Invalid Entry");
    break;
}

    return 0;
}