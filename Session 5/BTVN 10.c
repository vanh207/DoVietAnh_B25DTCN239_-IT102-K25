#include <stdio.h>
int main() {
    float electricityUsage, electricityConsumption, additionFee, totalBi
    int cosmumerType;
    printf("Enter consumed electricity (kWh): ");
    scanf("%f", &kWh);
    printf("Enter type (1: Household, 2: Business, 3: Factory): ");
    scanf("%d", &type);
    cost = (kWh > 200) ? (50*1500 + 50*2000 + 100*2500 + (kWh - 200)*3000) :
           (kWh > 100) ? (50*1500 + 50*2000 + (kWh - 100)*2500) :
           (kWh > 50)  ? (50*1500 + (kWh - 50)*2000) :
                         (kWh * 1500);
    feeRate = (type == 1) ? 0.05 :
              (type == 2) ? 0.10 :
              (type == 3) ? 0.08 : -1;
    (feeRate < 0) ? printf("Invalid type!\n") :
    (fee = cost * feeRate,total = cost + fee,
        printf("\nTotal cost = %.0f + %.0f = %.0f VND\n", cost, fee, total));
    return 0;
}
