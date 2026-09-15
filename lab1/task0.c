#include <stdio.h>


int task0() {

	printf("%10.3f\n ");
	printf(" %d разделить %d = %d\n ", 5, 2, 5 % 2);
	printf(" %d разделить %d = %d\n ", 7, 5, 7 % 5);
	printf(" %d умножить %d = %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e = %f\n ", 5., 2000000., 5. / 2000000);
}


int task1() {
	int N, K;//сейчас 14:52
	N = 14;
	K = 52;
	printf("сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("сейчас минут дня %d\n",N*60+K);
	printf("до полночи %d часов и %d минут\n", 24-N,60-K);
	printf("с 8:00 прошло %d секунд\n", ((N-8)*60*60) + (K*60));
	printf("сейчас часов суток %10.2f минут часа %10.2f\n",N/24.,K/60.);
}


int task2() {
	float k,n,L,m;
	n = 3.;
	L = 2333.;
	k = n/L;
	m = n/L;
	printf("Дано:\n           %.f\n         %.f\n\n        ----------\nРешение:\n        %0*.*f\n", n ,L,8,5, m);
}

int main()
{
	system("chcp 65001 > nul");
	task0();
	task1();
	task2();
	return 0;
}
