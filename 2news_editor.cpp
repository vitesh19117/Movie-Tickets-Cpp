// Assignment-1
// 2.News Editor

#include<iostream>
using namespace std;

int len(string s)
{
	int i;
	for(i = 0;s[i] != NULL; i++);
	
	return i;
}

int main()
{
	string str, x, y, output;
	int a, b, c, i, j, k, flag=0, start, end, s=0;
	
	cout<<"\nEnter the string : \n"<<endl;
	getline(cin, str);
	cout<<"\nEnter the word to be searched : \n"<<endl;
	cin>>x;
	cout<<"\nEnter the word to be replaced : \n"<<endl;
	cin>>y;

	a = len(str);
	b = len(x);
	c = len(y);	
	
	for(i=0;i<a;i++)					
	{
		flag = 0;
		start = i;
		for(j=0;str[i]==x[j];j++,i++)
		{
			if(j==b-1)
			{
				flag=1;
				s=1;
			}
		}
		end=i;
		if(flag==0)
		{
			i-=j;
		}
		else
		{
			for(j=start;j<end;j++)
			{
				for(k=start;k<a;k++)
				{
					str[k]=str[k+1];
				}
				a--;
				i--;
			}
			for(j=start;j<start+c;j++)
			{
				for(k=a;k>=j;k--)
				{
					str[k+1]=str[k];
				}
				str[j]=y[j-start];
				a++;
				i++;
			}
		}		
	}
	if(s == 1)
	{
		cout<<"\n\nAfter Replacing : \t"<<str<<endl;
	}
	else{
		cout<<"\n\n\t\t\tThe word "<<x<<" not found"<<endl;
	}
}
