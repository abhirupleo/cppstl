#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	//defining a vector
	std::vector<int> v;
	v.push_back(100);
	v.push_back(342);
	v.push_back(725);
	v.push_back(423);
	v.push_back(654);
	v.push_back(9764);
	v.push_back(2475);
	//using find to point the iterator to that particular integer
	std::vector<int>::iterator itr = find(v.begin(),v.end(),423);
	//using while loop to print all the elements after 443
	while(itr != v.end()){
		std::cout<<*itr<<std::endl;
		itr++;
	}
	return 0;
}