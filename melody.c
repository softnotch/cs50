#include<stdio.h>
#include <cs50.h>

int main(void)
{
    float weight = get_float("weight:\n");
    printf("Please enter your weight in Kg:%f\n", weight);

    float height = get_float("height:\n");
    printf("Please enter your height in inches:%f\n", height);
    
    float BMI = weight*(height*height);
    printf("Your BMI:%f\n", BMI)


    if (BMI <= 18.5)
    {
        printf("Your BMI is %f,\n You are underweight.\n",BMI);
    }
     if (BMI <= 24.9)
    {
        printf("Your BMI is %f,\n Your weight is normal.\n",BMI);
    }
     if (BMI <= 29.9)
    {
        printf("Your BMI is %f,\n You are overweight.\n",BMI);
    }
    
    return 0;
}
