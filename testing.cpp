#include <iostream>
#include <chrono>
#include <ctime>
#include <unistd.h>
#include <time.h>
#include <ratio>

#include <thread>

using namespace std;

int main()
{
	struct timespec tim, tim2;
   		tim.tv_sec = 0;
   		tim.tv_nsec = 10000;

   	auto t1 = chrono::high_resolution_clock::now();

   	nanosleep(&tim, &tim2);

   	 auto t2 = chrono::high_resolution_clock::now();

   	 cout << chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count() << endl;
   


 	return 0;

}