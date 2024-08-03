#include <iostream>
using namespace std;
template <typename T> void print_info(const T &value)
{
	if constexpr(is_integral_v<T>)
{
	cout<<"integral value "<<value<<endl;
}
else
{
	cout<<"non integral value "<<value<<endl;
}
}
int main()
{
print_info(15);
print_info(58.36);


}


