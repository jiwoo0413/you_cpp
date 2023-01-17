#include <iostream>
#include <string>

using namespace std;


//인라인 함수
inline int sum(int x, int y) {
    return x + y;
}

int main() {
    int x = 1;
    int y =2;
    cout << sum(x, y) << endl;
}






//오버로딩
// int countDigit(int num) {
//     if(num == 0) {
//         return 1;
//     }
//     int count = 0;
//     while (num) {
//         num /=10; //num = num / 10
//         count++;
//     }
//     return count;
// }

// int countDigitStr(string num) { 
//     return countDigit(stoi(num));
// }

// int countDigit(string num) {    //함수 오버로딩
//     return countDigit(stoi(num));
// }

// int main() {
//     cout << countDigit(12345) << endl;
//     cout << countDigitStr("12345") << endl;
//     cout << countDigit("12345") << endl;

//     cout << "A" << endl;
//     cout << (int)"A" << endl; // <<가 오버로딩 되어서 받아들이는 "A"가 달라짐 ****답은 다르지만 반환값은 달라짐*****
// }






//디폴트 매개변수
// int pow(int base = 2, int exp = 2) {   //base, exp는 디폴트  매개변수
//     int sum = 1;
//     for (int i = 0; i <exp; i++) {
//         sum *=base;
//     }
//     return sum;
// }

// int main() {
//     cout << pow(2, 10) << endl;
//     cout << pow(3) << endl;
//     cout << pow() << endl;
// }





//레퍼런스 전달 swap
// void swap(int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main() {
//     int x = 10;
//     int y = 20;
//     swap(x,y);
//     cout << x << endl;
//     cout << y << endl;
// }




//포인터를 사용한 swap
// void swap (int * px, int *py) {
//     int temp = *px;
//     *px =*py;
//     *py = temp;
// }

// int main() {
//     int x = 10;
//     int y = 20;
//     cout << x << endl;
//     cout << y << endl;

//     swap(&x, &y);
//     cout << x << endl;
//     cout << y << endl;
// }




//call by value
// void swap(int px, int py) {
//     cout << "px addr : " << &px << endl;
//     cout << "py addr : " << &py << endl;
//     int temp = px;
//     px=py;
//     py=temp;
// }

// int main() {
//     int x = 10;
//     int y = 20;
//     cout << "x addr : " << &x << endl;
//     cout << "y addr : " << &y << endl;
//     cout << "x : " << x << endl;
//     cout << "y : " << y << endl;
//     swap(x,y);
//     cout << "x : " << x << endl;
//     cout << "y : " << y << endl;
// }





//재귀함수
// void count(int n) {
//     if(n<0)
//         return;
//     cout << n << endl;
//     count(n -1);
// }

// int main() {
//     count(10);
// }





//함수
// int cabs(int);  //프로토 타입에서는 어떤 데이터 타입인지만 선언하면 된다.

// int abssum(int x, int y) {
//     return cabs(x) + cabs(y);
// }

// int cabs(int x) {
//     if(x>=0)
//         return x;
//     else
//         return -x;
//     //return x >= 0 ? x : -x; 삼항 연산자-> 코드를 줄일 수 있다
// }

// int sum(int x, int y) {
//     return x+y;
// }

// int main() {
//     cout << sum(1,2) << endl;
//     cout << abssum(10, -20) << endl;
// }





//참조 복습
// int main() {
//     int num =0;
//     const int& Num=num;
//     int *p= &num;
//     //Num = 12; const int로 선언해서 값 못 바꿈
//     cout << *p << endl;
//     cout << Num << endl;
// }