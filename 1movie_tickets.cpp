// Assignment-1
// 1. Movie Tickets

#include<iostream>
using namespace std;

int circle(int, char);
double coupon(char, double);
double refresh(int, char);

main()
{
	int n, king, queen;
	double tc, c, k, r, coup, tcost, total_cost;
	char ref, cc, cir;
	//cout<<"Yea...!, Our multiplex has announced discounts on movie tickets."<<endl;
	cout<<"Enter the no. of tickets : \t";
	cin>>n;
	if(n>=5 && n<=40)
	{
		cout<<"Do you want Refreshment : (y or n)\t";
		cin>>ref;
		cout<<"Do you have coupon code : (y or n)\t";
		cin>>cc;
		cout<<"Enter the circle : (k or q)\t\t";
		cin>>cir;
	}
	else
	{
		cout<<"Minimum of 5 and Maximum of 40 Tickets"<<endl;
		exit(0);
	}
	
	c = circle(n, cir);
	cout<<"\t\t\t\t\t 1. Circle Total Cost : "<<c<<endl;
	if(n >= 10)
	{
		k = c * 5 / 100;
		c = c - k;
		cout<<"\t\t\t\t\t 2. After adding 5% discount : "<<c<<endl;
	}
	else
	{
		cout<<"\t\t\t\t\t 2. Discount is not applicable if you select less than 10 tickets : "<<c<<endl;
	}
	
	coup = coupon(cc, c);
	tcost = coup;
	cout<<"\t\t\t\t\t 3. After applying coupon code : "<<tcost<<endl;
	
	r = refresh(n, ref);
	total_cost = tcost + r;
	cout<<"\t\t\t\t\t 4. If refreshment is added : "<<r<<endl;
	cout<<"\t\t\t\t\t 5. Total Tickets Cost ( 3. + 4.) : "<<total_cost<<endl;
	cout<<"\n\n\n\n\nTicket cost : "<<total_cost<<endl;
}

int circle(int n, char cir)
{
	int tc;
	if(cir == 'k')
	{
		int king = 150;
		tc = king * n;	
	}
	else if (cir == 'q')
	{
		int queen = 75;
		tc = queen * n;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		exit(0);
	}
	return tc;
}

double refresh(int n, char ref)
{
	if (ref == 'y')
	{
		n = n * 50;
	}
	else
	{
		n = 0;
	}
	return n;
}

double coupon(char cc, double c)
{
	if (cc == 'y')
	{
		c = c - (c * 2 / 100);
	}
	else
	{
		c;
	}
	return c;
}
