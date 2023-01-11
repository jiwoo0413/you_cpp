#include <iostream>
#include <vector>

using namespace std;

int main() { //reference
	int num0 = 0;
	int* num1 = &num0;
	int& num2 = num0; //참조
	
	cout << num0 << endl;
	cout << *num1 << endl;
	cout << num2 << endl;
	cout << endl;

	num0 = 20;
	cout << num0 << endl;
	cout << *num1 << endl;
	cout << num2 << endl;
	cout << endl;

	int* const num3 = &num0; //참조랑 똑같음(가리키는 주소를 못 바꾼다)
}

//int main() {
//	vector<int> vec1{ 1, 2, 3 };
//	vector<int> vec2{ 1, 2, 3, 4, 5, 6 };
//
//	cout << vec1.front() << endl;
//	cout << vec1.back() << endl;
//
//	vec1.swap(vec2);
//
//	for (int num : vec1) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	for (int num : vec2) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	//int arr0[3]{};
//	//int arr1[] = arr0;
//
//	vector<int> vec3;
//	vec3 = vec1;
//	for (int num : vec2) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//}



//int main() {
//	vector<int> vec(5); //vec(5, 100)하면 100으로 나옴(100으로 초기화)
//
//	for (int num : vec) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	vec.resize(3);
//
//	for (int num : vec) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	vec.resize(10);
//
//	for (int num : vec) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	vec.resize(15, 2);
//
//	for (int num : vec) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	cout << vec.size() << endl;
//	vec.push_back(0); //0은 뒤에 와야하는 수
//	cout << vec.size() << endl;
//
//	for (int num : vec) {
//		cout << num << ' ';
//	}
//	cout << endl;
//
//	vec.pop_back();
//	cout << vec.size() << endl;
//}



//int main() {
//	int num = 0;
//	int* p = &num;
//	cout << *p << endl;
//	void* vp = p;
//	int* p0 = (int*)vp; //형태가 이상해
//	cout << *p0 << endl;
//
//	int* P = (int*)malloc(sizeof(int) * 3);
//}


//int main() {
//	int* p = nullptr; //쓰지않는 포인터는 nullptr로 초기화
//
//}


//int main() {
//	int s;
//	cin >> s;
//	int* arr = new int[s] {};
//	
//	arr[0] = 1;
//	cout << arr[0] << endl;
//
//	delete[] arr; //동적으로 배열을 할당하면 초기화해야됨 아주 중요!! *****중간 문제*****
//}



//int main() {
//	int num[] = { 1, 2, 3 };
//	cout << num << endl;
//	int* pNum = num; //왜 이거 치면 안칠 때랑 주소 다르게 나올까??
//
//	cout << pNum[0] << endl;
//	cout << pNum[1] << endl;
//	cout << pNum[2] << endl;
//	cout << endl; //줄바꿈
//
//	cout << *(pNum) << endl;
//	cout << *(pNum + 1) << endl;
//	cout << *(pNum + 2) << endl;
//	cout << endl; //줄바꿈
//	
//	cout << pNum << endl;
//	cout << pNum + 1 << endl;
//	cout << pNum + 2 << endl;
//	cout << endl; //줄바꿈
//
//	cout << *pNum << endl;
//	pNum++;
//	cout << *pNum << endl;
//}


//int main() {
//	int num0 = 10;
//	const int* pNum0 = &num0; 
//
//	int num1 = 20;
//	pNum0 = &num1;
//	// *pNum0 = 30; 안됨
//
//	int* const pNum1 = &num0;
//	*pNum1 = 30;
//	//pNum1 = &num0; 안됨
//	cout << *pNum1 << endl;
//
//	const int* const pNmu3 = &num0;
//	//*pNum3 = 30; 안됨
//	//pNum3 = &num1; 안됨
//}


//union Union { 
//	int i;
//	float f;
//	double d;
//};

//int main() {    //포인터도 데이터 타입을 제대로 지정해줘야됨 그래야 값이 제대로 나옴
//	Union u; 
//
//	int* ip = (int*)&u;
//	float* fp = (float*)&u;
//	double* dp = (double*)&u;
//
//	u.i = 1;
//
//	cout << u.i << endl;
//	cout << *ip << endl;
//
//	cout << u.f << endl;
//	cout << *fp << endl;
//
//	cout << u.d << endl;
//	cout << *dp << endl;
//}



//int main() {
//
//	int num = 0;
//	int *pointer = &num;
//
//	cout << num << endl;
//	cout << &num << endl;
//	*pointer = 100;
//	cout << num << endl;
//
//	int *pNum0;
//	cout << pNum0 << endl;
//
//}