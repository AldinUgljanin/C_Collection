#include <stdio.h>

int main(int argc, char** argv){
    #ifdef _WIN32
	puts("Yout have Windows Operating System");
    #elif __linux__
	puts("Yout have Linux Operating System");
    #elif __unix__
	puts("Yout have Unix Operating System");
    #else
	puts("Unidentified OS\n");
    #endif

    return 0;
}
