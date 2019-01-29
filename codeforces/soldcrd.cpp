#include <bits/stdc++.h>
using namespace std;


// int fact(int n)
// {
//     if(n > 1)
//         return n * fact(n - 1);
//     else
//         return 1;
// }
int main()
{
	int n,k1,k2,i,j;
	cin>>n;

	list <int> list1,list2,temp1,temp2;

    cin>>k1;

    for(i=0;i<k1;i++)
    {
    	int a;
    	cin>>a;
    	list1.push_back(a);
    }

    cin>>k2;

    for(i=0;i<k2;i++)
    {
    	int b;
    	cin>>b;
    	list2.push_back(b);
    }
    temp1=list1,temp2=list2;
    int cont=0,check=0,cut=0;
    while(!list1.empty() && !list2.empty() )
    {
    	int u1=list1.front(),u2=list2.front();
    	list1.pop_front(),list2.pop_front();
    	if(u1>u2)
    	{
    		list1.push_back(u2);
    		list1.push_back(u1);
        }
        else
        {
        	list2.push_back(u1);
        	list2.push_back(u2);
        }

        cont++;

        if(cont>106)
       {
       	    check=-1;
       	    break;
       }
    }
    if(check==0)
    {
    int win;
    if(list1.empty()==1)
    {
    	win=2;
    }
    else
    	win=1;
    cout<<cont<<" "<<win;
    }
    else
    	cout<<check;
}