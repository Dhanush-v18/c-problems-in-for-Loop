#include<stdio.h>
int main(){
    int salary,absentDays,finalSalary;
    scanf("%d",&salary);
    scanf("%d",&absentDays);
    finalSalary=salary;
    for(int i=1;i<=absentDays;i++){
        finalSalary-= 100;
    }
    printf("Final Salary: %d", finalSalary);
    return 0;
}
