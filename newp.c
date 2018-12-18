#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <dirent.h>
//grep -c "[]\|[]\|[]공백없이" * | sort -nk2r -t":"
void do_fork(char *);
char recipe[20][20];
char *arglist
int num;
int main(int ac, char *av[])
{
    int input, i ;
	    
    printf("숫자 입력 1: 재료로 요리 찾기\n2:요리 추천받기 ");
    scanf("%d", &input);
    switch(input){
        case 1:
           
            }

            num=i;
            printf("재료를 %d개 입력했음.\n", i);


            break;//case1


    }//switch()


}///main

void do_fork( char path[] )
    /*
     *	use fork and execvp and wait to do it
     */
{
    char p[10000];
    int	pid,exitstatus, i,j,k;				/* of child	*/
    char search[23];
   
    pid = fork();					/* make new process */
    switch( pid ){
        case -1:	
            perror("fork failed");
            exit(1);
        case 0:

		
                execvp(S);		/* do it */
                perror("execvp failed");


            }				

            exit(0);
	    break;//case0
            //default:

    }//switch()
}
