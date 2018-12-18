#include <iostream>
#include <algorithm>
#include <vector>

void func(int v){
	std::cout<<v<<std::endl;
}

int main(int argc, char const *argv[])
{
	//declaring the vector
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(59);
	//declaring the iterator even though we don't use it
	std::vector<int>::iterator itr = v.begin();
	//trying out the foreach function
	for_each(v.begin(),v.end(),func);
	std::cout<<"\n \n";
	//trying out the foreach function with inline function definition
	for_each(v.begin(),v.end(),[](int v){
		std::cout<<v<<std::endl;
	});
	return 0;
}