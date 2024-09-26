#include <stdio.h>

int fibonacci(int n){//fiz recursivo pois aprendi recursividade na faculdade com esse ex em específico
	if(n == 0)
		return 0
	else if(n == 1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);

}

int efibonacci(int n){
	int i=0;
}
