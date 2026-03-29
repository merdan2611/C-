#include <iostream>
using namespace std;
int arrayNum [16];
int doubleAndAdd (int array [16]){
    int tempArray [16];
    int added = 0;
    for (int i = 14; i>=0; i-=2){
        int j = 0;
        int numDoubled = array[i] *2;
        if (numDoubled >9){
            int temp = numDoubled % 10;
            numDoubled = (numDoubled-temp) /10 ;
            added += numDoubled + temp;
    
        }else{
            added += numDoubled;
        }
        
    }
    return added;

}

int oddAdded(int array[16]){
    int oddAdded= 0;
    for (int i= 15; i>=0; i-=2){
        oddAdded += array[i];
    }
    return oddAdded;
}

void checkNum (long long number){
    
    long long tempDigit = number;
    int  n;
    for (int i=15; i>-1; i--){

        arrayNum [i]= tempDigit % 10;
        tempDigit /= 10;
        
    }
    for (n = 0; n<=15; n++){
        cout<< arrayNum[n];
    }
    cout << '\n';
}
int main(){

    long long cardNum;
    cout << "Enter a num: ";
    cin >> cardNum;
    checkNum(cardNum);
    int final = doubleAndAdd(arrayNum)+oddAdded(arrayNum);
    if ( final %10== 0){
        cout << "Card is valid!!";

    }else{
        cout << "Card is NOT valid"<< '\n';
    }


    return 0;
}