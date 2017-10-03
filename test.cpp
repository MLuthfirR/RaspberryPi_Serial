#include<iostream>
#include<iomanip>
#include<wiringSerial.h>
#include<unistd.h>
using namespace std;

int main(){
	cout<<"Hello World"<<endl;
	int handle,available;
	handle = serialOpen("/dev/ttyAMA0",9600);
	while(1){
		available = serialDataAvail(handle);
		cout<<available<<endl;
		sleep(1);
	}
	return 0;
}