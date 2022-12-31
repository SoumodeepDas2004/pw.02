#include <iostream>
using namespace std;
int sumthree (int a){
	int b,c,d,r;
	b=a/100;
	a=a%100;
	c=a/10;
	d=a%10;
	r= b+c+d;
	cout<<r<<"sum of the 3digits of given number";
	return 0;
	
}
int partsfive (int a){
	 int b,c, d,e,f,s ;

 b =a/10000;
 a=a%10000;
c=a/1000;
a=a%1000;
d=a/100;
a=a%100;
e=a/10;
f=a%10;
s=a+e; 
cout <<s<< "required ans";
return 0;
}
int caculator(int a,int b){
int n=a+b;
int s= a-b;
int m= a*b;
int d= a/b;
int r=a%b;
	cout <<"sum is--"<<n<<" _____substraction is--"<<s<<"____multiplication is--"<<m<<"____divition is--"<<d<<"___remainder is--"<<r<<endl ;
	return 0;
	}

int sum(int a,int b,int c){int n=a+b+c;
	cout <<n<<endl;
	return 0;}
	
	
int main()
{cout<<"qsn1"<<endl;
int  n,m;
cout<<"enter your no1 and no2-------"<<endl;

cin >>n>>m;
	 if(n== m){ cout<<true<<endl;
}else{cout <<false<<endl;
} 
cout<<"qsn2----"<<endl;
int a,b;
cout<<"enter values to check----";

cin>>a>>b;
if(a<b){
	if(a<50){cout<<true<< endl;}
	else{  cout<< false<<endl;}}
	else{cout<<false<<endl;}


cout<<"qsn--4---"<<endl;
cout << "your number of five digits----";
int v ;
cin >> v;
partsfive  (v);


cout<<"qsn--6--"<<endl;
int u,p;
cout<< "enter 2 numbers to calculate-----";
 cin>>u>>p;
caculator(u,p);


cout<<"qsn--3--"<<endl;
int tA,bA,gA;
bA=17 ;//boys getting A grade
tA=85*45/100;//total A gradd students
gA= tA- bA;// girls get A grade
cout<< "total A grade girls"<< gA<<endl;


cout<<"qsn--5--"<<endl;
cout<<"input your 3 digit number--";
int e;

cin>>e;
cout<<sumthree (e);
 }