/* Draw a doll stick figure */
#include <iostream>
using namespace std;

/* Function prototypes are declared here */
void draw_circle( );	     /* Draws a circle	*/

void draw_intersect( );	/* Draws intersecting lines	*/

void draw_base( );	    /* Draws a base line 	*/

void draw_triangle( );   /* Draws a triangle	*/

int main( )
{
      /* Draw a circle. 	*/
      draw_circle();

      /* Draw a triangle. 	*/
      draw_triangle();

      /* Draw intersecting lines.	*/
      draw_intersect();

      return 0;
}
 /* All function bodies are defined here */

/*
 * Draws a circle
 */
void draw_circle( )
{
     cout << "    *   \n";
     cout << " * @ @ * \n";
     cout << "  * v * \n";
     cout << "  * * *  \n";
}

/*
 * Draws intersecting lines
 */
void draw_intersect( )
{
      cout << "   / \\  \n"; /* Use 2 \'s to print 1 */
      cout << "  /   \\ \n";
      cout << " /     \\\n";
}

/*
 * Draws a base line
 */
void draw_base( )

{
      cout << "-------\n";
}

/*
 * Draws a triangle
 */
void draw_triangle( )
{
/* Call 2 existing functions to create the triangle */
/* This is an example of code reuse                 */
	  draw_intersect();
      draw_base();
}
