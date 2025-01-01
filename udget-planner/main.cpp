#include <iostream>
using namespace std;

int main() {
    float electricityPlanned, electricityActual, electricityDiff;
    float grocceryPlanned, grocceryActual, grocceryDiff;
    float clothingPlanned, clothingActual, clothingDiff;
    float schoolFeePlanned, schoolFeeActual, schoolFeeDiff;
    float fuelPlanned, fuelActual, fuelDiff;
    float loanPlanned, loanActual, loanDiff;
    float maintenancePlanned, maintenanceActual, maintenanceDiff;
    float miscPlanned, miscActual, miscDiff;

    cout<<"Enter Electricity Planned Budget : ";
    cin>>electricityPlanned;
    cout<<"Enter Electricity Actual Expense : ";
    cin>>electricityActual;

    cout<<"Enter Grocery Planned Budget : ";
    cin>>grocceryPlanned;
    cout<<"Enter Grocery Actual Expense : ";
    cin>>grocceryActual;

    cout<<"Enter Clothing Planned Budget : ";
    cin>>clothingPlanned;
    cout<<"Enter Clothing Actual Expense : ";
    cin>>clothingActual;

    cout<<"Enter School Fee Planned Budget : ";
    cin>>schoolFeePlanned;
    cout<<"Enter School Fee Actual Expense : ";
    cin>>schoolFeeActual;

    cout<<"Enter Fuel Planned Budget : ";
    cin>>fuelPlanned;
    cout<<"Enter Fuel Actual Expense : ";
    cin>>fuelActual;

    cout<<"Enter Loan Planned Budget : ";
    cin>>loanPlanned;
    cout<<"Enter Loan Actual Expense : ";
    cin>>loanActual;

    cout<<"Enter Maintenance Planned Budget : ";
    cin>>maintenancePlanned;
    cout<<"Enter Maintenance Actual Expense : ";
    cin>>maintenanceActual;

    cout<<"Enter Misc Planned Budget : ";
    cin>>miscPlanned;
    cout<<"Enter Misc Actual Expense : ";
    cin>>miscActual;

    electricityDiff = electricityPlanned - electricityActual;
    grocceryDiff = grocceryPlanned - grocceryActual;
    clothingDiff = clothingPlanned - clothingActual;
    schoolFeeDiff = schoolFeePlanned - schoolFeeActual;
    loanDiff = loanPlanned - loanActual;
    miscDiff = miscPlanned - miscActual;
    fuelDiff = fuelPlanned - fuelActual;
    maintenanceDiff = maintenancePlanned - maintenanceActual;

    // output statements

    cout<<"sr No. \t\t Head \t\t Planned \t\t Actual \t\t Difference \n";
    cout<<"1. \t\t Electricity \t\t"<< electricityPlanned<<"\t\t"<< electricityActual<<"\t\t"<<electricityDiff <<"\n";
    cout<<"2. \t\t Grocery \t\t"<< grocceryPlanned<<"\t\t"<< grocceryActual<<"\t\t"<<grocceryDiff <<"\n";
    cout<<"3. \t\t Clothing \t\t"<< clothingPlanned<<"\t\t"<< clothingActual<<"\t\t"<<clothingDiff <<"\n";
    cout<<"4. \t\t School Fee \t\t"<< schoolFeePlanned<<"\t\t"<< schoolFeeActual<<"\t\t"<<schoolFeeDiff <<"\n";
    cout<<"5. \t\t Fuel \t\t"<< fuelPlanned<<"\t\t"<< fuelActual<<"\t\t"<<fuelDiff <<"\n";
    cout<<"6. \t\t Loan \t\t"<< loanPlanned<<"\t\t"<< loanActual<<"\t\t"<<loanDiff <<"\n";
    cout<<"7. \t\t Maintenance \t\t"<< maintenancePlanned<<"\t\t"<< maintenanceActual<<"\t\t"<<maintenanceDiff <<"\n";
    cout<<"8. \t\t Misc \t\t"<< miscPlanned<<"\t\t"<< miscActual<<"\t\t"<<miscDiff <<"\n";


    return 0;
}
