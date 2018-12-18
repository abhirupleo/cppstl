#include <algorithm>
#include <iostream>
#include <deque>
#include <list>
#include <string>
#include <iterator>

use namespace std;
int main()
{
	list<string> ls = {"one","yellow","red","car","bus","lenin"};

	deque<string> dq;
	copy(ls.begin(),ls.end(),back_inserter(dq));
	return 0;
}