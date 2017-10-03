#include<iostream>
#include<iomanip>
#include<wiringSerial.h>
using namespace std;

int main(){
	cout<<"Hello World"<<endl;
	int handle,available;
	handle = serialOpen("/dev/ttyAMA0",9600);
	while(1){
		available = serialDataAvail(handle);
		cout<<available<<endl;
	}
	return 0;
}