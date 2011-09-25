/************************************************************************
 * NAME									*
 *   ticker.c								*
 *									*
 * SYNOPSIS								*
 *   ticker "message"							*
 *									*
 * DESCRIPTION								*
 *   Ticks a message every second to the standard output		*
 *									*
 * AUTHOR								*
 *   Peter Schmid, Hochschule Zürich, pschmid@hsz-t.ch			*
 *									*
 * CVS									*
 *   $Id: ticker.c,v 1.1 2007/09/14 06:59:49 pschmid Exp pschmid $	*
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>




int main(int argc, char **argv) {

    if( argc != 2 ) {
	(void)fprintf(stderr, "synopsis: ticker message\n");
	return(1);
    }

	time_t mytime;

    while(1) {
	mytime = time(NULL);
	(void)printf("%s - %i - %s",argv[1], getpid(), ctime(&mytime));
	(void)sleep(1);
    }

    return(0);
}
