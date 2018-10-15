#include <iostream>
using namespace std;
int main(){
	int tempval;
	#ifdef myflag
	cout<<"g++ compiler.cpp -o compiler -Wall -Werror"<<endl;
	#else
	cout<<"g++ compiler.cpp -o compiler -Wall"<<endl;
	#endif
	cout<<"compiler.cpp: In function 'int main()':"<<endl;
	#ifdef myflag
	cout<<"compiler.cpp:4:6: error: unused variable 'tempval' [-Werror=unused-variable]"<<endl;
	#else
	cout<<"compiler.cpp:4:6: warning: unused variable 'tempval' [-Wunused-variable]"<<endl;
	#endif
	cout<<"  int tempval;"<<endl;
	cout<<"      ^"<<endl;
	#ifdef myflag
	cout<<"cc1plus: all warnings being treated as errors"<<endl;
	return 1;
	#else
	return 0;
	#endif
}
