#include<iostream>
using namespace std;
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//	}
//};
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//	}
//};
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//int main()
//{
//	Person ps;
//	Student st;
//	Func(ps);
//	Func(st);
//	return 0;
//}

//Э��
//class A {};
//class B : public A {};
//
//class Person {
//public:
//	virtual A* f() { return new A; }
//};
//
//class Student : public Person {
//public:
//	virtual B* f() { return new B; }
//};

//������������д
//class Person {
//public:
//	virtual ~Person() { cout << "~Person()" << endl; }
//};
//
//class Student : public Person {
//public:
//	virtual ~Student() { cout << "~Student()" << endl; }
//};
//
//int main()
//{
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//	return 0;
//}

//C++11 override��final
//�����麯������ʾ���麯�������ٱ��̳�
//class Car
//{
//public:
//	virtual void Drive() final{}
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive() { cout << "Benz-����" << endl; }
//};

//override: ����������麯���Ƿ���д�˻���ĳ���麯�������û����д���뱨��
//class Car {
//public:
//	virtual void Drive() {}
//};
//
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-����" << endl; }
//};

//ֻ����д���麯�������������ʵ����������
//class Car
//{
//public:
//	virtual void Drive() = 0;
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-����" << endl;
//	}
//};
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-�ٿ�" << endl;
//	}
//};
//
//void Test()
//{
//	Car* pBenz = new Benz;
//	pBenz->Drive();
//	Car* pBMW = new BMW;
//	pBMW->Drive();
//}
//
//#include<iostream>
//using namespace std;
//class A {
//public:
//	A(const char* s) { cout << s << endl; }
//	~A() {}
//};
//class B :virtual public A
//{
//public:
//	B(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
//};
//
//class C :virtual public A
//{
//public:
//	C(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
//};
//class D :public B, public C
//{
//public:
//	D(const char* s1, const char* s2, const char* s3, const char* s4) :B(s1, s2), C(s1, s3), A(s1)
//	{
//		cout << s4 << endl;
//	}
//};
//
//int main() {
//	D* p = new D("class A", "class B", "class C", "class D");
//	delete p;
//	return 0;
//}

//������������
//template<class T>
//struct BSNode
//{
//	BSNode(const T& data = T())
//		:_pLeft(nullptr)
//		,_pRight(nullptr)
//		,_data(data)
//	{
//
//	}
//	BSNode<T>* _pLeft;
//	BSNode<T>* _pRight;
//	T _data;
//};
//template<class T>
//class BSTree
//{
//	typedef BSNode<T> Node;
//	typedef Node* PNode;
//public:
//	BSTree() :_pRoot(nullptr) {};
//	~BSTree() {};
//	PNode Find(const T& data) {};
//	//����ڵ�
//	bool Insert(const T& data)
//	{
//		if (nullptr == _pRoot)
//		{
//			_pRoot = new Node(data);
//			return true;
//		}
//		PNode pCur = _pRoot;
//		PNode pParent = nullprt;
//		while (pCur)
//		{
//			pParent = pCur;
//			if (data < pCur->_data)
//				pCur = pCur->_pLeft;
//			else if (data > pCur->_pRight)
//				pCur = pCur->_pRight;
//			else
//				return false;
//		}
//		pCur = new Node(data);
//		if (data < pParent-> - data)
//			pParent->_pLeft = pCur;
//		else
//			pParent->_pRight = pCur;
//		return true;
//	}
//	//ɾ���ڵ�
//	bool Erase(const T& data)
//	{
//		//��������ɾ��
//		if (nullptr == _pRoot)
//			return false;
//		//����dataλ��
//		PNode pCur = _pRoot;
//		PNode pParent = nullptr;
//		while (pCur)
//		{
//			if (data == pCur->_data)
//				break;
//			else if (data < pCur->_data)
//			{
//				pParent = pCur;
//				pCur = pCur->_pLeft;
//			}
//			else
//			{
//				pParent = pCur;
//				pCur = pCur->_pRight;
//			}
//		}
//		if (nullptr == pCur)
//			return false;
//		if (nullptr == pCur->_pRight)
//		{
//			pParent->_pLeft = pCur->_pLeft;
//			delete pCur;
//			pCur = nullptr;
//		}
//		else if (nullptr == pCur->_pLeft)
//		{
//			pParent->_pRight = pCur->_pRight;
//			delete pCur;
//			pCur = nullptr;
//		}
//		else
//		{
//
//		}
//		return true;
//	}
//private:
//	PNode _pRoot;
//};

//int main()
//{
//	int i = 3,
//	*j = &i;
//	int& k = &j;
//	int& k = i;
//	int& k = 5;
//	int& k = j;
//	return 0;
//}

//class D
//{
//	int a;
//public:
//	D(int i = 0)
//		:a(i)
//	{
//
//	}
//	void show()
//	{
//		cout << a;
//	}
//};
//int main()
//{
//	D o1(2);
//	D& o2 = o1;
//	D* o3 = &o1;
//	o1.show();
//	o2.show();
//	o3->show();
//	(*o3).show();
//}
//class B
//{
//public:
//	virtual void show(){}
//};
//int main()
//{
//	B o1;
//	B& o2;
//	const B* o4;
//	B* o3;
//}
//int main()
//{
//	int i = 10;
//	int* p = &i;
//	double j = reinterpret_cast<double&>(i);
//	p = reinterpret_cast<int*>(j);
//	p = reinterpret_cast<double*>(j);
//	*p = reinterpret_cast<int&>(j);
//}

//#include <iostream>
//#include <string>
//#include <unordered_set>
//
//using namespace std;
//
//// �жϷ�ĸ�Ƿ�ȫΪ0
//bool isDenominatorZero(const string& denom) {
//    return denom.find_first_not_of('0') == string::npos; // �ж��Ƿ�ȫ��0
//}
//
//// �ж������ַ����Ƿ����ͨ��ɾ����ͬ�ַ��õ�
//bool canTransform(const string& num1, const string& denom1, const string& num2, const string& denom2) {
//    unordered_set<char> set1;
//
//    // ����һ�������ķ��Ӻͷ�ĸ�е��ַ����뼯��
//    for (char c : num1) set1.insert(c);
//    for (char c : denom1) set1.insert(c);
//
//    // ���ڶ��������ķ���
//    for (char c : num2) {
//        if (set1.find(c) == set1.end()) {
//            return false;
//        }
//    }
//
//    // ���ڶ��������ķ�ĸ
//    for (char c : denom2) {
//        if (set1.find(c) == set1.end()) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//// ȥ���ַ����е������ַ�
//string removeCharacters(const string& str, const string& charsToRemove) {
//    string result;
//    for (char c : str) {
//        if (charsToRemove.find(c) == string::npos) {
//            result += c;
//        }
//    }
//    return result;
//}
//
//int main() {
//    int T;
//    cin >> T; // ��ȡ��������
//    cin.ignore(); // �����н�����
//
//    for (int i = 0; i < T; i++) {
//        string fraction1, fraction2;
//        getline(cin, fraction1); // ��ȡ���У������ո�
//
//        // �ҵ������ķָ���λ��
//        size_t spacePos = fraction1.find(' ');
//        string fraction1_part = fraction1.substr(0, spacePos);
//        string fraction2_part = fraction1.substr(spacePos + 1);
//
//        // �ָ����1
//        string num1 = fraction1_part.substr(0, fraction1_part.find('/'));
//        string denom1 = fraction1_part.substr(fraction1_part.find('/') + 1);
//
//        // �ָ����2
//        string num2 = fraction2_part.substr(0, fraction2_part.find('/'));
//        string denom2 = fraction2_part.substr(fraction2_part.find('/') + 1);
//
//        // �������������ȣ�ֱ����� "Yes"
//        if (fraction1_part == fraction2_part) {
//            cout << "Yes" << endl;
//            continue;
//        }
//
//        // ȷ����ĸ��ȫΪ��
//        if (isDenominatorZero(denom1) || isDenominatorZero(denom2)) {
//            cout << "No" << endl;
//            continue;
//        }
//
//        // ����ַ�ɾ�����Ӻͷ�ĸ����ͬ�ַ�
//        string transformedNum1 = num1;
//        string transformedDenom1 = denom1;
//
//        // �������е��ַ�ɾ��
//        for (char c : num1) {
//            string tempNum = removeCharacters(transformedNum1, string(1, c));
//            string tempDenom = removeCharacters(transformedDenom1, string(1, c));
//
//            // �жϽ���Ƿ�ƥ��
//            if (tempNum == num2 && tempDenom == denom2) {
//                cout << "Yes" << endl;
//                break;
//            }
//        }
//
//        // ���û���ҵ����ʵı任
//        cout << "No" << endl;
//    }
//
//    return 0;
//}
//template<class K,class V>
//struct BSTNode
//{
//	BSTNode(const K& key=K(),const V& value=V())
//		:_pLeft(nullptr)
//		,_pRight(nullptr)
//		,_key(key)
//		,_Value(value)
//	{}
//	BSTNode<T>* _pLeft;
//	BSTNode<T>* _pRight;
//	K _key;
//	V _value;
//};
//template<class K,class V>
//class BSTree
//{
//	typedef BSTNode<K, V> Node;
//	typedef Node* PNode;
//public:
//	BSTree():_pRoot(nullptr){}
//	~BSNode(){}
//};

