#include<iostream>
using namespace std;

class Item
{
	public:
		int id,qty,price;
		string name;
		static int total;
		void getinput()
		{
			cout<<"Input";
			cin>>id>>name>>qty>>price;
		}
		void output()
		{
			total=total+price*qty;
			cout<<id<<"\t"<<name<<"\t"<<qty<<"\t"<<price<<"\t"<<qty*price<<"\n";
		}
		static int getTotal(){
			return total;
		}
}I[10];
int Item:: total;
int main()
{
	int i;
	
	for(i=1;i<3;i++)
	{
		I[i].getinput();
	}
	
	cout<<"Id"<<"\t"<<"Name"<<"\t"<<"Qty"<<"\t"<<"Price"<<"\t"<<"Total";
cout<<"\n";
		for(i=1;i<3;i++)
	{
		I[i].output();
	}
	cout<<"\t"<<"Name"<<"\t"<<"Qty"<<"\t"<<"Price"<<"\t"<<"Total";
cout<< Item::getTotal();
	return 0;
}
