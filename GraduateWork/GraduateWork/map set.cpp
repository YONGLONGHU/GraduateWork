#include<iostream>
using namespace std;
//template<class T1,class T2>
//struct pair
//{
//	typedef T1 first_type;
//	typedef T2 second_type;
//
//	pair():first(T1(),second(T2())){}
//	pair(const T1& a, const T2& b)
//		:first(a)
//		, second(b)
//	{}
//private:
//	T1 first;
//	T2 second;
//};
//int main()
//{
	/*int x = 10;
	int y = x++;
	int a = 5;
	int& ref = a;
	ref = 10;*/
	/*int a = 10;
	const int* p = &a;
	*p = 20;

	int x = 10; int& r = x++;*/
	//double i = 256;
	//int& r = i;
	//int& r = 256;


//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//// Helper function to convert a character to its score
//int charToScore(char c) {
//    if (c >= 'a' && c <= 'z') {
//        return c - 'a' + 1;
//    }
//    if (c >= 'A' && c <= 'Z') {
//        return c - 'A' + 1;
//    }
//    return 0;
//}
//
//// Helper function to convert a score back to a character
//char scoreToChar(int score) {
//    return 'a' + score - 1; // score is between 1 and 26
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    vector<string> scores(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> scores[i];
//    }
//
//    vector<pair<int, char>> finalScores(m); // Pair of (index, finalScore)
//
//    for (int j = 0; j < m; ++j) {
//        vector<int> currentScores;
//
//        // Collect scores for the j-th contestant
//        for (int i = 0; i < n; ++i) {
//            currentScores.push_back(charToScore(scores[i][j]));
//        }
//
//        // Sort to find the min and max scores
//        sort(currentScores.begin(), currentScores.end());
//
//        // Remove one min and one max score
//        currentScores.erase(currentScores.begin()); // Remove min
//        currentScores.pop_back(); // Remove max
//
//        // Calculate average of the remaining scores
//        int sum = 0;
//        for (int score : currentScores) {
//            sum += score;
//        }
//
//        int count = currentScores.size();
//        int finalScore = count > 0 ? ceil(static_cast<double>(sum) / count) : 0; // Avoid division by zero
//        char finalChar = scoreToChar(finalScore);
//
//        finalScores[j] = { j + 1, finalChar }; // Store index and final score
//    }
//
//    // Sort final scores by score and then by index
//    sort(finalScores.begin(), finalScores.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
//        if (a.second == b.second) {
//            return a.first < b.first; // Sort by index if scores are equal
//        }
//        return a.second < b.second; // Sort by score
//        });
//
//    // Output the sorted indices
//    for (const auto& p : finalScores) {
//        cout << p.first << " ";
//    }
//    cout << endl;
//
//    // Output the final scores
//    for (const auto& p : finalScores) {
//        cout << p.second << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int charToScore(char c) {
//    return (c >= 'a' && c <= 'z') ? c - 'a' + 1 : c - 'A' + 1;
//}
//
//char scoreToChar(int score) {
//    return 'a' + score - 1; // score is between 1 and 26
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m;
//
//    vector<string> scores(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> scores[i];
//    }
//
//    vector<pair<int, char>> finalScores(m);
//
//    for (int j = 0; j < m; ++j) {
//        vector<int> currentScores(n);
//
//        for (int i = 0; i < n; ++i) {
//            currentScores[i] = charToScore(scores[i][j]);
//        }
//
//        sort(currentScores.begin(), currentScores.end());
//        currentScores.erase(currentScores.begin()); // Remove min
//        currentScores.pop_back(); // Remove max
//
//        int sum = 0;
//        for (int score : currentScores) {
//            sum += score;
//        }
//
//        int finalScore = currentScores.size() > 0 ? ceil(static_cast<double>(sum) / currentScores.size()) : 0;
//        finalScores[j] = { j + 1, scoreToChar(finalScore) };
//    }
//
//    sort(finalScores.begin(), finalScores.end(), [](const auto& a, const auto& b) {
//        return (a.second == b.second) ? a.first < b.first : a.second < b.second;
//        });
//
//    for (const auto& p : finalScores) {
//        cout << p.first << " ";
//    }
//    cout << endl;
//
//    for (const auto& p : finalScores) {
//        cout << p.second << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

#include<set>
//int main()
//{
//	int array[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	set<int> s(array, array + sizeof(array) / sizeof(array[0]));
//	cout << s.size() << endl;
//	for (auto& e : s)
//		cout << e << " ";
//	cout << endl;
//	//迭代器逆向打印
//	for (auto it = s.rbegin(); it != s.rend(); ++it)
//		cout << *it << " ";
//	cout << endl;
//	// set中值为3的元素出现了几次
//	cout << s.count(1) << endl;
//	return 0;
//}

#include<map>
//int main()
//{
//	map<string, string> m;
//	//向map中插入元素
//	m.insert(pair<string, string>("peach", "桃子"));
//	m.insert(make_pair("banan", "香蕉"));
//	m["apple"] = "苹果";
//	cout << m.size() << endl;
//	for (auto& e : m)
//		cout << e.first << "--->" << e.second << endl;
//	cout << endl;
//
//	auto ret = m.insert(make_pair("peach", "桃色"));
//	if (ret.second)
//		cout << "<peach, 桃色>不在map中, 已经插入" << endl;
//	else
//		cout << "键值为peach的元素已经存在：" << ret.first->first << "--->" <<
//		ret.first->second << " 插入失败" << endl;
//	m.erase("apple");
//	if (1 == m.count("apple"))
//		cout << "apple还在" << endl;
//	return 0;
//}

//template<class T>
//struct AVLTreeNode
//{
//public:
//	AVLTreeNode(const T& data)
//		:_pLeft(nullptr), _pRight(nullptr), _pParent(nullptr)
//	    ,_data(data),_bf(0){}
//private:
//	AVLTreeNode<T>* _pLeft;
//	AVLTreeNode<T>* _pRight;
//	AVLTreeNode<T>* _pParent;
//	T _data;
//	int _bf;
//};
////红黑色的定义
//enum Color{RED,BLACK};
//template<class ValueType>
//struct RBTreeNode
//{
//public:
//	RBTreeNode(const ValueType& data = ValueType()，Color color = RED)
//		: _pLeft(nullptr), _pRight(nullptr), _pParent(nullptr)
//		, _data(data), _color(color)
//	{}
//
//private:
//	RBTreeNode<ValueType>* _pLeft; // 节点的左孩子
//	RBTreeNode<ValueType>* _pRight; // 节点的右孩子
//	RBTreeNode<ValueType>* _pParent; // 节点的双亲
//	ValueType _data; 
//	Color _color;
//};