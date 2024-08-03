#include <iostream>
using namespace std;
template <typename args>
template<class...T>
auto sum(T...args)
{
	return (...+args);
}

cout<<"------fold expression-------\n";
auto s=sum(10,20,30);
cout<<"sum = "<<s<<endl;
