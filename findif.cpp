#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

//defining an user defined function to check for a space
bool isspc(char c){
	return (c == ' ');
}
//defining a function object
struct aprox_pi
{
	bool operator()(double b){
		return b>3.14 && b<3.15;
	}
};
int main()
{
	//defining a string
	std::string s = "Hello this is a test text. 1";
	std::vector<double> v;
	v.push_back(199.34);
	v.push_back(3.141);
	v.push_back(545.9);
	v.push_back(987);
	v.push_back(657);
	v.push_back(834);
	v.push_back(485);
	v.push_back(200.0);
	//defining an iterator
	auto itr = find_if(s.begin(),s.end(),isdigit);
	if(itr!=s.end())
			std::cout<<"Digit is: "<<*itr<<std::endl;
	//second method using user defined function
	auto u = find_if(s.begin(),s.end(),isspc);
	std::cout<<"u: "<<std::boolalpha<<(*u==' ')<<std::endl;
	//third method using the lambda expression
	auto l = find_if(s.begin(),s.end(),[](char c){
		return c == 'x';
	});
	std::cout<<"l: "<<std::boolalpha<<(*l=='x')<<std::endl;
	//fourth method using a function object
	auto f = find_if(v.begin(),v.end(),aprox_pi{});
	std::cout<<*f<<std::endl;
	return 0;
}