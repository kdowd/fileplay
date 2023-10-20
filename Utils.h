#pragma once
#include <iostream> 
#include <string> 
#include <queue>
#include <windows.h>



void print_queue(std::queue<int> q) {

	while (!q.empty()) {
		std::cout << q.front() << std::endl;
		Sleep(10);
		q.pop();
	}
}
