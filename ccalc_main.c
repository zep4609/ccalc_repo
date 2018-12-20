/**
 * @file ccalc_main.c
 * @author Siegfried Porterfield
 * @date 19 Dec 2018
 *
 * @brief Main module for CCalc.
 *
 * CCalc is a GTK+ based graphing calculator built for math research,
 * dealing with Newtonian and non-Newtonian calculi.
 */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include "ccalc_gui.h"

#define ERR_APP_ALLOC "Memory allocation for user application failed"


/**
 * @brief Main routine for the CCalc application.
 * 
 * Initializes the GUI client, joins the top-level thread
 * of the client, frees memory from the application, and
 * returns its exit status.
 * @return Returns the exit status of the GUI client.
 */
int main( void ) {
    CalcApp * mainApp = startApp();
    int status;
    if ( mainApp == NULL ) {
        fprintf(
            stderr,
            "%s: %s\n", 
            ERR_APP_ALLOC, 
            strerror( errno )
        );
    }
    status = cleanApp( mainApp );
    return status;
}

