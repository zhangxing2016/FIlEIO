//============================================================================
// Name        : mytestc1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
   //以C方式来读入文件和输出文件
	int a,b;
	FILE *stream;
	if((stream=freopen("in.txt","r",stdin))==NULL)
		exit(-1);
	if((freopen("outfromC.txt","w",stdout))==NULL)
		exit(-1);
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d+%d=%d\n",a,b,a+b);
	}
	fclose(stdin);
	fclose(stdout);
	//以C方式读入输出文件结束

/*
    //下面以C++方式读入文件和输出文件
    int a,b;
    FILE *stream;
	if((stream=freopen("in.txt","r",stdin))==NULL)
		exit(-1);
	if((freopen("outfromC.txt","w",stdout))==NULL)
		exit(-1);
    while(cin>>a>>b){
    	cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    //以C++方式读入输出文件结束
*/

	return 0;
}
