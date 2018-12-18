#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	//setting up the vector
	std::vector<int> v = {1,2,3,4,5};
	//using the anyof algorithm with an inline function
	bool b = any_of(v.begin(),v.end(),[](int i){
		return i>=5;
	});
	//printing out the boolean result
	std::cout<<std::boolalpha<<b<<std::endl;
	return 0;
}