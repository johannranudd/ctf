#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


#define BUFSIZE 100


long increment(long in) {
	return in + 1;
}

long get_random() {
	return rand() % BUFSIZE;
}

int do_stuff() {
	long ans = get_random();
	ans = increment(ans);
	int res = 0;
	
	printf("ANS: %i\n", ans);
	return res;
}

void win() {
	char winner[BUFSIZE];
	printf("New winner!\nName? ");
	fgets(winner, 360, stdin);
	printf("Congrats %s\n\n", winner);
}

int main(int argc, char **argv){
	setvbuf(stdout, NULL, _IONBF, 0);
	// Set the gid to the effective gid
	// this prevents /bin/sh from dropping the privileges
	gid_t gid = getegid();
	setresgid(gid, gid, gid);
	int res;
	int counter = 0;
	while(counter < 10){	
		res = do_stuff();
		counter++;
	}
	return 0;
}

