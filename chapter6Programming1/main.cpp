#include <iostream>
#include <iomanip>
using namespace std;


double whoCost,
        retailPrice,
        markPercentage,
        calculateretail(double, double);

double calculateretail(double whoCost, double markPercentage) {
    retailPrice=whoCost+whoCost*(markPercentage/100);
    return retailPrice;
}
int main(){
    cout<<"Please enter a wholesale cost price";
    cin>> whoCost;
    while(whoCost<0){
        cout<<"Enter a positive value for wholesale cost";
        cin>>whoCost;
    }
    cout<<"Please enter a markup percentage";
    cin>> markPercentage;
    while(markPercentage<0){
        cout<<"The markup percentage has to be positive";
        cin>>markPercentage;
        }

    cout<<"The retail price is $ "<<calculateretail(whoCost, markPercentage)<<endl;

    return 0;
}

