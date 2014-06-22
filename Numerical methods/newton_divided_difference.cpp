#include<iostream>
#include<cstdio>

using namespace std;

float dd(int n,float a[][2])
{
  float f=0,p=1;
  for(int i=0;i<n+1;i++)
    {
      for(int j=0;j<n+1;j++)
	{
	  if(i!=j)
	    {
	      p=p*(a[i][0]-a[j][0]);
	    }
	}
      f=f+(a[i][1])/p;
      p=1;
    }
  return f;
}

int main()
{
  int i,j,n;

  //input the number of points
  cout<<"Number of points that you want to input: ";
  cin>>n;


  float a[n][2],x;
  //Inputs (points using which interpolation equation will be formed)
  //Maximum 25 points can be given as input
  
  //cout<<"Enter points as x y"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i][0]>>a[i][1];

  }
  
  cout<<"Enter the point x where you want interpolated value: ";
  cin>>x;
  cout<<endl;
  
  //forming interpolation eq.

  float e=0;
  float p=1;
  for(i=0;i<n;i++)
    { for(j=0;j<i;j++)
	{ 
	  p=p*(x-a[j][0]);
	  
	}
      e=e+p*dd(i,a);
      p=1;
      
    }

  

  
  cout<<"Value of y at x="<<x<<" is ="<<e<<endl;




  cin.get();
  getchar();
  return 0;
}
