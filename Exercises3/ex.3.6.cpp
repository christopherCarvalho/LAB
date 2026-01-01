//Health app: IMC
#include <iostream>
using namespace std;

double calculateImc(double, double);
string tableImc(double);

int main(){
    double weight, height;
    cout << "Enter weight and heigth: " << endl;
    cin >> weight >> height;
    
    double result = calculateImc(weight, height);

    cout << "BMI  is: " << result << " " << tableImc(result) << endl;

    return 0;
}

double calculateImc(double weight, double height){
    return weight/(height * height);
}

string tableImc(double result){

    if(result < 18){
        return "Underweight";
    }
    else if( result >= 18 && result < 24.9){
        return "Normal";
    }
    else if(result >= 25.0 && result <29.9 ){
        return "Overweight";
    }
    else if(result >= 30.0 && result < 34.9){
        return "Obesity I";
    }
    else if(result >= 35.0 && result < 39.9){
        return "Obesity II";
    }
    else{
        return "Obesity III (morbid obesity)";
    }
}