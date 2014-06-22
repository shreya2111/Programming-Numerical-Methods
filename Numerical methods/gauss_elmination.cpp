#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int m,i,j,k,max_i;
    
    cout<<"Input the size of matrix: "<<endl;
    cin>>m;
    float a[m][m],b[m],x[m];
    
    cout<<"Input elements of a  matrix: "<<endl;
    for(i=0;i<m;i++)
      {
             
	for(j=0;j<m;j++)
	  {             //cout<<"input a["<<i<<"]["<<j<<"]:";
	    cin>>a[i][j];
                                    
	  }
	x[i]=1;
     }

    cout<<"Input b matrix"<<endl;
    for(i=0;i<m;i++)
      {

	//cout<<"input b["<<i<<"]:";
                    cin>>b[i];
      }

    
    float max,temp,f1,f2;
    int count;
    
    for(j=0;j<m;j++)
    {
      count=0;
      max=fabs(a[j][j]);
       for(i=j;i<m;i++)
	{ 
	  if(fabs(a[i][j])>max)
	    {
	      //cout<<"a["<<i<<"]["<<j<<"]: "<<a[i][j]<<endl;
	      max=a[i][j];
	      max_i=i;
	      count=1;
	    }
	}
       //cout<<"count: "<<count<<endl;
       if(count!=0)
	 {
	for(k=0;k<m;k++)
	{
	  temp=a[j][k];
	  a[j][k]=a[max_i][k];
	  a[max_i][k]=temp;
	}
      //swapping for b matrix   
      temp=b[j];
      b[j]=b[max_i];
      b[max_i]=temp;                                      
	 }                               
      for(k=j+1;k<m;k++)
	{
	  f1=a[k][j];
	  f2=a[j][j];
	  //cout<<"f1 "<<f1<<" f2: "<<f2<<endl;
		     
	  for(i=j;i<m;i++)
	    {   a[k][i]=a[k][i]-f1*a[j][i]/f2; 
                                                         
	      //cout<<"a["<<k<<"]["<<i<<"]: "<<a[k][i]<<endl;                   
	    }
	  b[k]=b[k]-f1*(b[j]/f2);  
	  //cout<<"b["<<k<<"]: "<<b[k]<<endl;  
		
                       
	}

      // cout<<"  final matrix  "<<endl;
                    
      // for(k=0;k<m;k++)
      // 	{
                                        
      // 	  for(i=0;i<m;i++)
      // 	    {
      // 	      cout<<a[k][i]<<" ";
                                        
      // 	    }
                        
      // 	  cout<<endl;
      // 	}
                        
                        
      // for(i=0;i<m;i++)
      // 	{
      // 	 cout<<"b["<<i<<"]: "<<b[i]<<endl;                                       
      // 	}
                    
    }
    
    
    
    cout<<" Solution for the matrix "<<endl;
    
    int p=1;
    float sum;
    for(i=0;i<m;i++)
      {	
	p=p*a[i][i];                            
      }
    if(p!=0)
   {
    for(i=m-1;i>=0;i--)
      {
	sum=0;
	for(j=i+1;j<m;j++)
	  {
	    sum+=a[i][j]*x[j];
	  } 
	x[i]=(b[i]-sum)/a[i][i];                            
	 
      }
   }
    
    for(i=0;i<m;i++)
      {	
	cout<<"x["<<i<<"]:"<<x[i]<<endl;                            
      }
    
    cin.get();
    getchar();

    return 0;
}

