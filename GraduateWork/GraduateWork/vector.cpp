#include<iostream>
#include<vector>
using namespace std;
//¹¹Ôìº¯Êý
int main()
{
	vector<int> first;
	vector<int> second(4, 100);
	vector<int> third(second.begin(), second.end());
	vector<int> fouth(third);

	int myints[] = { 13,23,34,123,34,456 };
	vector<int>fifth(myints, myints + sizeof(myints) / sizeof(int));
	for (vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';
	return 0;
}