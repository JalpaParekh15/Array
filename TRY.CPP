  #include<iostream.h>

  int test(int a,int b)
  {
	int i,sum =0;
	int n[]={10,20,30,40,50,60,70,80,90,100};

	for (i=0;i<=9;i++)
	{

	 if( a==n[i] && b==n[i])
	{
	  cout<<" Both in Array";
	 }
	 else
	 {
	return 0;
	}

	if(a<=n[i] && b<=n[i])
	{
	  cout<<" Both is positive";
	}
	else
	{
	return -1;
	}

	if (a<=b && b<=n[i])
	{
	 cout<<" a is small";
	}
	else
	{
	 return 0;
	}
      }
	for (i=a;i<=9;i++)
	{
	 for (i=b;i<=9;i++)
	 {
	  sum =n[a]+n[b];
	  cout<<"sum="<<sum;
	  }
	}
 return sum ;
}


void main()
{

	int a,b;
	cout<<"Enter  a & b :" ;
	cin>>a>>b;
	test(a,b);
}


