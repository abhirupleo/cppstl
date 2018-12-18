#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


using namespace std;

int main(int argc, char const *argv[])
{
	//this is a program to test vectors,lists and algorithms
	vector<int> v;
	v.push_back(100);
	v.push_back(20);
	v.push_back(30);
	//sorting the vector
	sort(v.begin(),v.end());
    //print the size of the vector
	cout<<v.size()<<endl;
    //trying out iterators
    vector<int>::iterator itr = v.begin();
    //looping through the vector
    for(;itr != v.end();itr++){
    	cout<<"value "<<*itr<<endl;
    }
	return 0;
}