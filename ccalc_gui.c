/**
 * @file ccalc_gui.c
 * @date 20 December 2018
 * @author Siegfried Porterfield
 *
 * @brief Module for the GTK user interface of a CCalc application.
 *
 * The functions below create, maintain, and destroy GtkApplication
 * structures, and use canvas with the hyperoperational calculus
 * library to graph functions inputted by the user.
 */

#include <gtk/gtk.h>
#include "ccalc_gui.h"


CalcApp * startApp( void ) {
    return NULL;
}


int cleanApp( CalcApp * dirty ) {
    if ( dirty == NULL ) {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

