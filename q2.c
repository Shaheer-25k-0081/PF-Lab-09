#include <stdio.h>

float calcBonus(int salary);

float calcBonus(int salary) {
    float bonus;
    if (salary < 30000)
    {
        bonus = salary * 0.2;
    }
    else
    {
        bonus = salary * 0.1;
    }
    return bonus;
}

int main() {
    int salary;
    float bonus[5], totalPayout = 0.0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter salary for Employee %d: ", i+1);
        scanf(" %d", &salary);
        bonus[i] = calcBonus(salary);
        totalPayout += (bonus[i] + salary);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d Bonus: %.2f\n", i+1, bonus[i]);
    }
    
    printf("Total Payout: %.2f", totalPayout);
    return 0;
}