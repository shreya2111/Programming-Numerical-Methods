#include<iostream>

using namespace std;

int main()
{
    int i,j,k,s=0,sum=0,sum2=0;
    


                
    cout<<"------------------------LU Decomposition method-------------------------"<<endl;
    cout<<"Enter the size/order of the square matrix: ";
    cin>>s;
    cout<<"Input the matrix elements:"<<endl;
                     
     
    float a[s][s],l[s][s],u[s][s],b[s],x[s],z[s];
          
    for(i=0;i<s;i++)    /*   Input for co-efficient matrix*/
      {
	for(j=0;j<s;j++)
	  {
	    cin>>a[i][j];  
	    l[i][j]=0;
	    u[i][j]=0;
	  }
    }
    cout<<"Input for b matrix (ax=b)"<<endl;

    for(i=0;i<s;i++)      /*   Input for b  matrix in (ax=b) */
      { cin>>b[i];  
      }


    
    for(i=0;i<s;i++)
    {  l[i][i]=1; // diagonal elements of lower tri. matrix
//     cout<<l[i][j]<<j<<endl;
    
    }

    
    for(i=0;i<s;i++)
    {  for(j=0;j<s;j++)
      {   sum=0;
          sum2=0;            
         
          if(i<=j)
          {
                 for(k=0;k<=i-1;k++)
                 {
                 sum=sum+u[k][j]*l[i][k];
                 cout<<"sum= "<<sum<<endl;
                 }
                 u[i][j]=a[i][j]-sum;
                 cout<<"u["<<i<<"]["<<j<<"]: "<<u[i][j]<<endl;
          }          
          else
          {              
          for(k=0;k<=j-1;k++)
             {
                sum2=sum2+u[k][j]*l[i][k];
             }
             l[i][j]=(a[i][j]-sum2)/u[j][j];
             cout<<"l["<<i<<"]["<<j<<"]: "<<l[i][j]<<endl;
          }
          
      }
    }
    
    
    cout<<"     "<<"----------------------After LU decomposition---------------------"<<endl;
    
    cout<<"The lower triangular matrix is: "<<endl;
     
    
    for(i=0;i<s;i++)
    {
     for(j=0;j<s;j++)
     {
                     cout<<l[i][j]<<"  ";
                     
     } 
     cout<<endl;              
     
    }
    
    cout<<"The upper triangular matrix is: "<<endl;

    for(i=0;i<s;i++)
    {
     for(j=0;j<s;j++)
     {
                     cout<<u[i][j]<<"  ";
                     
     } 
     cout<<endl;              
     
    }
    
    

    /* To check if solutions are possible for this matrix*/
    int count=0;
    for(i=0;i<s;i++)
      {
	if(u[i][i]==0.0)
	  {
	    count+=1;
	    cout<<"Solution is not possible for this matrix as u["<<i<<"]["<<i<<"]:= 0"<<endl;
	  }
      }

    if(count==0)
      {
	/*     Forward substitution for finding z in: Ax=B; LUx=B; Ux=z; Lz=B; */
	float sum0=0;
	for(i=0;i<s;i++)
	  {
	    for(j=0;j<i;j++)
	      {
		sum0+=l[i][j]*z[j];
		
	      }
	    z[i]=(b[i]-sum0)/l[i][i];
	    
	    //cout<<"z["<<i<<"]: "<<z[i]<<endl;
	  }
	


	/* Backward substitution for finding x in: Ax=B; LUx=B; Ux=z; */

	float sum1=0;
	for(i=s-1;i>=0;i--)
	  {
	    for(j=i+1;j<=s-1;j++)
	      {
		sum1+=u[i][j]*x[j];
		//cout<<sum1<<"ok"<<endl;
	      }
	   x[i]=(z[i]-sum1)/u[i][i];
	  }
      }


    for(i=0;i<s;i++)
      {    cout<<"x["<<i<<"]:"<<x[i]<<endl;
      }
   
    std::cin.get();
    

    
}
