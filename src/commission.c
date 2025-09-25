#include <stdio.h>

int main(){
    int sales_man_code, total_sales;
    double total_salary, total_commission, salary, commission_rate, amount_sales, unit_price;
    printf("Enter the salesman's code: ");
    scanf("%d", &sales_man_code);
    printf("Enter the total sales made: ");
    scanf("%d", &total_sales);
    printf("Enter the unit price: ");
    scanf("%lf", &unit_price);
    amount_sales = total_sales * unit_price;
    printf("Enter the fixed salary: ");
    scanf("%lf", &salary);
    printf("Enter the commission rate (in percentage): ");
    scanf("%lf", &commission_rate);
    total_commission = (commission_rate / 100) * amount_sales;
    total_salary = salary + total_commission;
    printf("The total salary of salesman %d is: R$%.2lf\n", sales_man_code, total_salary);
    return 0;
}