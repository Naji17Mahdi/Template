#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

template < class   T >
T reverse ( T  x )
{
	return -x;
}
main()
{
	int a = 3 ;
	double d = 2.7;
	
	cout<<reverse ( a )<<endl;
	cout<<reverse ( d )<<endl;
}
