#include  <bits/stdc++.h>

using namespace std;

float pcalc(float a,int b)
{
	float temp=a;
	
	  for(int i=1;i<b;i++)
	   temp=temp*(a-i);
	   
   return temp;
  
}


int fact(int n)
{
	if(n==1)
	return 1;
	
	else
	return n*fact(n-1);
		
}


int main()
{
	  int N,i,j;
	  float V;
	  
	cout<<"enter the no of datapoints = ";
	cin>>N;
	
	float X[N];
	
	  cout<<"Enter the Value of X = ";
	  
	  for(i=0;i<N;i++)
	   cin>>X[i];
	   
	   cout<<"Enter the value of Y=";
	   float Y[N][N];
	   
	   //Y[N][N]={0};
	   
	   for(i=0;i<N;i++)
	   cin>>Y[i][0];
	   
	   for(i=1;i<N;i++)
	      for(j=0;j<N-i;j++)
	        Y[j][i]=Y[j+1][i-1]-Y[j][i-1];
	        
	        cout<<"X\tY\t";
	        
			for(i=1;i<N;i++)
	          cout<<"Del"<<(i+1)<<"Y\t\t";
	          
	          cout<<endl;
	                  
	        for(i=0;i<N;i++)
	        {  cout<<X[i]<<"\t";
	        	 for(j=0;j<N-i;j++)
	        	 	cout<<Y[i][j]<<"\t";
				 
				 cout<<"\n";
			       	 
			}
			cout<<endl;
			
			cout<<"Enter the interpolating value=";
			cin>>V;
			
			float p=(V-X[0])/(X[1]-X[0]);
			
			float sum= Y[0][0];
			
			for(i=1;i<N;i++)
			{
				sum=sum+(pcalc(p,i)*Y[0][i])/fact(i);
			}
			
			cout<<"\n The Interpolated Value = "<<sum<<endl;
			
			
			
			
			


         	
	   }
	   	  
	   

