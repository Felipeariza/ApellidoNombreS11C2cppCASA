#include<iostream>

using namespace std;
void producto(int a[], int b[]);
void producto_punto(intc[], int d[]);

int main(){
	
	int q[5] ={1,2,3,4,5}
    int w[5] ={10,20,30,40,50}
	producto(q,w);
    producto_punto(q,w);
	return 0;

}

void producto(int a[], int b[])
{
	
	int a[5];
    int b[5];
    int r;
    for (int i=0; i <= 4; i++)
	{
    cin>>a[i];
    cin>>b[i];
	}
    r =0;
	for (int i=0; i <= 4; i++)
	{
    r = a[i]*b[i]
	cout<<"El elemento"<< i <<" es : "<<r<<endl;
	}
	
}

void producto_punto(int c[], int d[])
{
	
	int c[4];
    int d[4];
    int res;
    for (int i=0; i <= 4; i++)
	{
    cin>>c[i];
    cin>>d[i];
	}
    res=0;
	for (int j=0; j <= 4; j++)
	{
    r += a[j]*b[j]
	}
	cout<<"El resultado es : "<<r<<endl;
}