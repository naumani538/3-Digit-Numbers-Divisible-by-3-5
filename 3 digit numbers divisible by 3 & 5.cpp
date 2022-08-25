#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n = 0;
	for( unsigned int i = 100 ; i <= 999 ; i++ )
	{
		if( i%5 == 0 and i%3 == 0 )
		{
			cout<<i<<endl;
			n+=1;
		}
	}
	cout<<"Total: "<<n<<endl;
	getche();
}