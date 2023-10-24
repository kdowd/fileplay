#include <iostream> 
#include <string> 
#include <queue>
#include <windows.h>
#include "Utils.h"

using namespace std;



int main()

{
	queue<int> myQueue;

	myQueue.push(99);
	myQueue.push(108);
	myQueue.push(9);
	myQueue.push(43);
	myQueue.push(007);

	print_queue(myQueue);

	return 0;
}
