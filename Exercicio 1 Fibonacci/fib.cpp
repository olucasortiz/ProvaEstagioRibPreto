#include <stdio.h>

int fibonacci(int n){//fiz recursivo pois aprendi recursividade na faculdade com esse ex em específico
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);

}

int efibonacci(int n){
	int num=0, fib=0;
	while(fib<n){
		fib = fibonacci(num);
		if(fib == n)
			return 1; //pert a fib
		num++;
	}
	return 0;// retorna 0 se o num n pertencer a fib
}


int main(){
	int num;
	scanf("%d", &num);
	if(efibonacci(num))
		printf("o numero %d pertence a fib", num);
	else printf("o numero %d nao pertence a fib");
}
