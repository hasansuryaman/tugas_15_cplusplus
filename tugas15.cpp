#include <iostream>

using namespace std;

int kalikan(int *px, int *py){
    int hasil;
    hasil = *px * *py;
    return hasil;
}

int main(){
    int x, y;
    cout <<"Inputkan X : " ;
    cin>> x;
    cout <<"Inputkan X : " ;
    cin>> y;
    cout << kalikan(&x, &y) <<endl;
}
