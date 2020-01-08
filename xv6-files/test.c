
#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

char *argv[] = { "ls", 0};
char *argv2[] = { "echo", "gdi"};
int k, i, j;
int main() {
  int pid;

	pid = fork();
 	 if (pid > 0) {//parent
	//	nice(2);
		wait();
	  }
	  else if(pid == 0) {//child
	//	nice(0)

		j = 0;
		for(k = 0; k < 1500; k++) {
			j = j + 4*2;
			if(j % 20 == 0)
				printf(1, "dolr\n");
		}
		exec("ls", argv);
 	 }
  exit();
}
