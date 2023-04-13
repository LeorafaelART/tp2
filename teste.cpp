#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
	Stack<char> P1;
	string a,b="";
	a="olegario";
	int tamanho=a.size();
	for(int i=0;i<tamanho;i++)
	{
		P1.push(a[i]);
		cout<<"Topo: ";
		cout<<P1.top()<<endl;
		b+=P1.top();
		cout<<"Tamanho da pilha: ";
		cout<<P1.size()<<endl; 
	}
	cout<<b<<endl;
	while(P1.empty()==false)
	{
		P1.pop();
	}	
	cout<<P1.size()<<endl;	
}
