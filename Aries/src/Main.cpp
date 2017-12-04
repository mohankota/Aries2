/***************************************************************
 * 	File: 		Main.cpp
 * 	Author :	Mohan
 **************************************************************/

#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	pid_t pid = fork();

	if(pid)
	{
		cout<<"Inside Parent"<<endl;
	}
	else
	{
		cout<<"Inside Child"<<endl;
	}

	return 0;
}

