#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
	int n = 5;
	int i, pid, d, k;
	k = 0;
	for(i = 0; i < n; i++){
		pid = fork();
		if(pid < 0)
			printf(1, "error!");
		else if(pid > 0)
			wait();
		else {
			for(d = 0; d < 150000; d++)
			    k = k + 3*2;
			break;
		}
	}
	exit();
}
