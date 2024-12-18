#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main() {
   CommissionEmployee commissionEmployee{
      "Sue", "Jones", "222-22-2222", 10000, .06};

   // aim derived-class pointer at base-class object                 
   // Error: a CommissionEmployee is not a BasePlusCommissionEmployee
   BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{
      &commissionEmployee};
}

