#include <iostream>
#include <vector>

using namespace std;

int main() { //reference
	int num0 = 0;
	int* num1 = &num0;
	int& num2 = num0; //����
	
	cout << num0 << endl;
	cout << *num1 << endl;
	cout << num2 << endl;
	cout << endl;

	num0 = 20;
	cout << num0 << endl;
	cout << *num1 << endl;
	cout << num2 << endl;
	cout << endl;

	int* const num3 = &num0; //������ �Ȱ���(����Ű�� �ּҸ� �� �ٲ۴�)
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
//	vector<int> vec(5); //vec(5, 100)�ϸ� 100���� ����(100���� �ʱ�ȭ)
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
//	vec.push_back(0); //0�� �ڿ� �;��ϴ� ��
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
//	int* p0 = (int*)vp; //���°� �̻���
//	cout << *p0 << endl;
//
//	int* P = (int*)malloc(sizeof(int) * 3);
//}


//int main() {
//	int* p = nullptr; //�����ʴ� �����ʹ� nullptr�� �ʱ�ȭ
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
//	delete[] arr; //�������� �迭�� �Ҵ��ϸ� �ʱ�ȭ�ؾߵ� ���� �߿�!! *****�߰� ����*****
//}



//int main() {
//	int num[] = { 1, 2, 3 };
//	cout << num << endl;
//	int* pNum = num; //�� �̰� ġ�� ��ĥ ���� �ּ� �ٸ��� ���ñ�??
//
//	cout << pNum[0] << endl;
//	cout << pNum[1] << endl;
//	cout << pNum[2] << endl;
//	cout << endl; //�ٹٲ�
//
//	cout << *(pNum) << endl;
//	cout << *(pNum + 1) << endl;
//	cout << *(pNum + 2) << endl;
//	cout << endl; //�ٹٲ�
//	
//	cout << pNum << endl;
//	cout << pNum + 1 << endl;
//	cout << pNum + 2 << endl;
//	cout << endl; //�ٹٲ�
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
//	// *pNum0 = 30; �ȵ�
//
//	int* const pNum1 = &num0;
//	*pNum1 = 30;
//	//pNum1 = &num0; �ȵ�
//	cout << *pNum1 << endl;
//
//	const int* const pNmu3 = &num0;
//	//*pNum3 = 30; �ȵ�
//	//pNum3 = &num1; �ȵ�
//}


//union Union { 
//	int i;
//	float f;
//	double d;
//};

//int main() {    //�����͵� ������ Ÿ���� ����� ��������ߵ� �׷��� ���� ����� ����
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