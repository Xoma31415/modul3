#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
	pid_t a, b, c;
	uid_t d, e;
	gid_t f;
	a = getpid();
	b = getppid();
	d = getuid();
	e = getuid();
	f = getgid();
	c = getsid(0);
	printf("a is %ld, b is %ld, c is %ld\n", a, b, c);
	printf("d is %ld, e is %ld, f is %ld\n", d, e, f);

	return 0;
}
