# CCalc - A GTK+3.0 based graphing calculator in C.

This project is an application to assist research in the field of
hyperoperational calculus.

## Project Goals - Overview
- compute derivatives of elementary, trigonometric, and some special functions
- graph hyperoperational derivatives and integrals
- provide a clean and interactive user interface

# Section A - User Interface
Before developing the application for our research, we will
set up the GUI we want.

Well, what do we want?

Most important is the 2D graphing ability, so we should have
a way to draw our functions.

### A.1 - 2D Graphing
We will graph functions on a 2D plane.

To do this we will need to understand which 2D plane we are talking about.
- How many units are the horizontal/vertical bounds away from the origin?
- What here is a unit?
- Is the point of view of the application even centered on the origin?

We must know also which function we are graphing.
- Is the output graphed vertically or horizontally?
- How precise is the plotting of each point of a function?
- For multiple functions, what shape, color, and size are our plots?

However, it is mostly the snythesis of the function and the graph we must implement.
- How much should a drag/scroll of the mouse move the plot?
- Where on the screen will we have menu options? How are they styled?
- Will there be 3D functions graphed with a slider/timer?

### A.2 - Menus, Pages, and Options
Various pages, including a menu, will be added into the application. We plan on
launching the app with a menu.
- What is the menu layout?
- Will there be buttons for different functionalities and to bring the user to different pages?
- How much information does the app need before it starts graphing?
- (IMPORTANT) How will error data get to the user and the developer?

## Section B - Computational Calculus
First, we get from the user to the graph by the entrance of a function by the user.
Secondly, we must construct a function using what the user entered.
Only then are we ready to plot.

### B.1 - User Input for Functions
We get the functions we need to graph from the user.
- Will we get user input from a text bar or a set of buttons?
- How do we keep the history from a user's previous graphing?

But, we must convert this text into something easier to work with.
- How will parse trees be constructed based on user text?
- What pattern will we use to create nodes for and execute the parse tree?
- What will the regex be for the accepted language?

Now to figure out what's happening within the parse tree.
- Are we using the Risch Algorithm for integrals? How?
- What special functions are we adding to our differentiation algorithm?

### B.2 - Hyperoperational Calculus
The heart of the research.
- How should the user function input parse tree be affected by hyperoperations?
- When do we need to give up with finding closed forms for parse tree execution and just approximate?

# Conclusion

This file should be updated by contributors to reflect implemented answers to
questions and other announcements. Content to be deleted from the file should
be discussed thoroughly first.
