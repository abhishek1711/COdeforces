// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
// 	ios_base::sync_with_stdio(false);cin.tie(NULL);
// 	long long int a,b;cin>>a>>b;
// 	long long int tempa,tempb;
// 	tempa=a;tempb=b;
// 	int diga=0,digb=0,i,j;
// 	int arra[25],arrb[25];
// 	while(tempa!=0;)
// 	{	
// 		int rema=tempa%10;
// 		arra[diga]=rema;
// 		tempa=tempa/10;
// 		diga++;
// 	}
// 	while(tempb!=0;)
// 	{
// 		int remb=tempb%10;
// 		arra[digb]=remb;
// 		tempb=tempb/10;
// 		digb++;
// 	}

// 	sort(arra,arra+diga);

// 	int numa=0;
// 	if(digb>diga)
// 	{
// 		for(i=diga;i>=0;i--)
// 		{
// 			numa=numa+arra[i]*pow(10,i);
// 		}
// 		cout<<numa;
// 	}
// 	numa=0;
// 	else
// 	{	
// 		int tb=diga;
// 		for(i=diga;i>=0;)
// 		{
// 			while(arra[i]>arrb[digb])
// 			{
// 				i--;
// 			}
// 			int temp=arra[tb];
// 			arr[tb]=
// 		}
// 	}
// }
	

#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
using namespace std;


int main()
{
    string s1,s2;
    int x=0,y=0;
    cin>>s1>>s2;
    x=s1.length();
    y=s2.length();
    sort(s1.begin(),s1.end());
    if(x<y)
    {
        reverse(s1.begin(),s1.end());
        cout<<s1<<endl;
        return 0;
    }
    string temp;
    for(int i=0;i<x;i++)
    {
        for(int j=x-1;j>i;j--)
        {
            temp=s1;
            swap(s1[i],s1[j]);
            sort(s1.begin()+i+1,s1.end());
            if(s1.compare(s2)>0)
            {
                s1=temp;
            }
            else
            {
                break;
            }
        }
    }
    cout<<s1<<endl;
    return 0;
}