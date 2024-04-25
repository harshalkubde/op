
int main()

{
	int n,num;
	bool flag=true;
	cout<<"enter prime no:"<<endl;
	cin>>n;
	
	if(n%2==0){
		flag=false;
		cout<<"not prime";
		
	}
	else if(n%2!=0)
	{
		flag=true;
		cout<<"prime no";
	}
	else{
		cout<<"inavlid output:"<<endl;
	}
}

