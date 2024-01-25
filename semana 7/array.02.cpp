#include <iostream>
using namespace std;

int main(){
    int numbers[5];
    for(int i=0; i<5; i++){
        numbers[i] = i + 1; 
    }
    int numbers2[] = {1,2,3,4,5};

    int auxiliary = numbers[0];//1
    numbers[0] = numbers[4];//5
    numbers[4] = auxiliary;//1
    cout<<numbers[4];

    //auxiliary = numbers[1];


    return 0;
}