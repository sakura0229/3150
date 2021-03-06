#include <stdio.h>	// perror()
#include <unistd.h>	// pause()
#include <signal.h>	// signal(), "SIGINT"

void sig_handler(int sig)
{
	if(sig == SIGINT)
		printf("SIGINT received\n");
}

int main(void)
{
	signal(SIGINT, sig_handler);
	pause();
	printf("Ctrl+C received. Bye!\n");
	return 0;
}
