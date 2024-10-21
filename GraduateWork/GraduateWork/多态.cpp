#include<iostream>
using namespace std;
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-全价" << endl;
//	}
//};
//class Student :public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-半价" << endl;
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

//协变
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

//析构函数的重写
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

//C++11 override和final
//修饰虚函数，表示该虚函数不能再被继承
//class Car
//{
//public:
//	virtual void Drive() final{}
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive() { cout << "Benz-舒适" << endl; }
//};

//override: 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错。
//class Car {
//public:
//	virtual void Drive() {}
//};
//
//class Benz :public Car {
//public:
//	virtual void Drive() override { cout << "Benz-舒适" << endl; }
//};

//只有重写纯虚函数，派生类才能实例化出对象
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
//		cout << "Benz-舒适" << endl;
//	}
//};
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-操控" << endl;
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

//二叉树搜索树
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
//	//插入节点
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
//	//删除节点
//	bool Erase(const T& data)
//	{
//		//空树不能删除
//		if (nullptr == _pRoot)
//			return false;
//		//查找data位置
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
//// 判断分母是否全为0
//bool isDenominatorZero(const string& denom) {
//    return denom.find_first_not_of('0') == string::npos; // 判断是否全是0
//}
//
//// 判断两个字符串是否可以通过删除相同字符得到
//bool canTransform(const string& num1, const string& denom1, const string& num2, const string& denom2) {
//    unordered_set<char> set1;
//
//    // 将第一个分数的分子和分母中的字符加入集合
//    for (char c : num1) set1.insert(c);
//    for (char c : denom1) set1.insert(c);
//
//    // 检查第二个分数的分子
//    for (char c : num2) {
//        if (set1.find(c) == set1.end()) {
//            return false;
//        }
//    }
//
//    // 检查第二个分数的分母
//    for (char c : denom2) {
//        if (set1.find(c) == set1.end()) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//// 去除字符串中的所有字符
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
//    cin >> T; // 读取数据组数
//    cin.ignore(); // 忽略行结束符
//
//    for (int i = 0; i < T; i++) {
//        string fraction1, fraction2;
//        getline(cin, fraction1); // 读取整行，包括空格
//
//        // 找到分数的分隔符位置
//        size_t spacePos = fraction1.find(' ');
//        string fraction1_part = fraction1.substr(0, spacePos);
//        string fraction2_part = fraction1.substr(spacePos + 1);
//
//        // 分割分数1
//        string num1 = fraction1_part.substr(0, fraction1_part.find('/'));
//        string denom1 = fraction1_part.substr(fraction1_part.find('/') + 1);
//
//        // 分割分数2
//        string num2 = fraction2_part.substr(0, fraction2_part.find('/'));
//        string denom2 = fraction2_part.substr(fraction2_part.find('/') + 1);
//
//        // 如果两个分数相等，直接输出 "Yes"
//        if (fraction1_part == fraction2_part) {
//            cout << "Yes" << endl;
//            continue;
//        }
//
//        // 确保分母不全为零
//        if (isDenominatorZero(denom1) || isDenominatorZero(denom2)) {
//            cout << "No" << endl;
//            continue;
//        }
//
//        // 逐个字符删除分子和分母的相同字符
//        string transformedNum1 = num1;
//        string transformedDenom1 = denom1;
//
//        // 尝试所有的字符删除
//        for (char c : num1) {
//            string tempNum = removeCharacters(transformedNum1, string(1, c));
//            string tempDenom = removeCharacters(transformedDenom1, string(1, c));
//
//            // 判断结果是否匹配
//            if (tempNum == num2 && tempDenom == denom2) {
//                cout << "Yes" << endl;
//                break;
//            }
//        }
//
//        // 如果没有找到合适的变换
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

