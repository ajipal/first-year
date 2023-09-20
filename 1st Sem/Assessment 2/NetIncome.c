#include<stdio.h>

int main()
{
  float GrossIncome, IncomeTax, SSSContribution, MedicalInsurance, NetIncome;

  //Enter Gross income
  printf("Enter Gross Income: ");
  scanf("%f", &GrossIncome);

  //Enter Income tax
  printf("Enter Income tax: ");
  scanf("%f", &IncomeTax);

  //Enter SSS contribution
  printf("Enter SSS Contribution: ");
  scanf("%f", &SSSContribution);

  //Enter MedicalInsurance
  printf("Enter Medical Insurance: ");
  scanf("%f", &MedicalInsurance);

  //Computation to get Net Income
  NetIncome = GrossIncome-IncomeTax-SSSContribution-MedicalInsurance;
  printf("NetIncome= %.2f", NetIncome);

  return 0;
}