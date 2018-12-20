/**
 * @file ccalc_gui.h
 * @author Siegfried Porterfield
 * @date 20 Dec 2018
 *
 * @brief Header file for the CCalc graphical user interface.
 *
 * TODO
 */

#ifndef _CCALC_GUI_H
#define _CCALC_GUI_H

#include <gtk/gtk.h>


/**
 * @brief Type to be interfaced by ccalc_main.c, handling the GUI.
 */
typedef struct {
    GtkApplication * app;  /**< The GTK user interface. */
    gboolean isRunning;      /**< Whether the application is running or not. */
} * CalcApp;


/**
 * @brief Initializes the GtkApplication and begins the client-user routine.
 * @return A pointer to a running CalcApp.
 */
CalcApp * startApp( void );


/**
 * @brief Frees memory from the application.
 * @param dirty @c free will be called on members.
 * @return Exit status of the client-user routine.
 */
int cleanApp( CalcApp * dirty );

#endif /* _CCALC_GUI_H */
