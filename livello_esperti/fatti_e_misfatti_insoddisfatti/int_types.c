#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("\nC Integral Data Types.\nBrought to you by Zi0P4tch0.\n\n");
	
	printf("Compiler: ");
	
	#if defined __amd64__ || __amd64 || __x86__64__ || __x86__64 || _M_X64 || __ia64__ || _IA64 || __IA64__ \
		|| __ia64 || _M_IA64
	printf("64 bit.\n\n");
	#elif defined i386 || __i386__ || __i486__ || __i586__ || __i686__ || __i386 || _M_IX86 || __X86__ \
		|| _X86_ || __THW_INTEL__ || __I86__ 
	printf("32 bit.\n\n");
	#else
	printf("unknown.\n\n");
	#endif
	
	printf("sizeof(char) -> %d %s (%d bits).\n",sizeof(char),(sizeof(char)>1?"bytes":"byte"),
		sizeof(char)*8);
	printf("\trange: %0.lf to %0.lf.\n",(-(pow(2,(sizeof(char)*8)-1))),((pow(2,(sizeof(char)*8)-1)-1)));
	printf("\tunsigned range: 0 to %0.lf.\n",((pow(2,(sizeof(char)*8))-1)));
	printf("sizeof(short) -> %d %s (%d bits).\n",sizeof(short),(sizeof(short)>1?"bytes":"byte"),
		sizeof(short)*8);
	printf("\trange: %0.lf to %0.lf.\n",(-(pow(2,(sizeof(short)*8)-1))),((pow(2,(sizeof(short)*8)-1)-1)));
	printf("\tunsigned range: 0 to %0.lf.\n",((pow(2,(sizeof(short)*8))-1)));
	printf("sizeof(int) -> %d %s (%d bits).\n",sizeof(int),(sizeof(int)>1?"bytes":"byte"),
		sizeof(int)*8);
	printf("\trange: %0.lf to %0.lf.\n",(-(pow(2,(sizeof(int)*8)-1))),((pow(2,(sizeof(int)*8)-1)-1)));
	printf("\tunsigned range: 0 to %.0lf.\n",((pow(2,(sizeof(int)*8))-1)));
	printf("sizeof(long) -> %d %s (%d bits).\n",sizeof(long),(sizeof(long)>1?"bytes":"byte"),
		sizeof(long)*8);
	printf("\trange: %0.lf to %0.lf.\n",(-(pow(2,(sizeof(long)*8)-1))),((pow(2,(sizeof(long)*8)-1)-1)));
	printf("\tunsigned range: 0 to %.0lf.\n",((pow(2,(sizeof(long)*8))-1)));
	printf("sizeof(long long) -> %d %s (%d bits).\n",sizeof(long long),(sizeof(long long)>1?"bytes":"byte"),
		sizeof(long long)*8);
	printf("\trange: %0.lf to %0.lf.\n",(-(pow(2,(sizeof(long long)*8)-1))),((pow(2,(sizeof(long long)*8)-1)-1)));
	printf("\tunsigned range: 0 to %.0lf.\n\n",((pow(2,(sizeof(long long)*8))-1)));
	
	#ifdef WIN32
	system("PAUSE");
	#endif
	
	return EXIT_SUCCESS;
}
