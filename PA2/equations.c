/*******************************************************************************************************************************************************
 *Programmer: David Henshaw																															   *
 *Class: CptS 121, Fall 2017, Leb Section 03																										   *
 *Programming Assignment: PA2																													       *
 *Date: September 11, 2017																															   *
 *Description: equations.c file contains the function descriptions for use in doing the calculations for eight equations							   *
    Each function description begins with local variable declaration, the calculation for each equation, and then returns the value back to main.c	   *
********************************************************************************************************************************************************/

#include "equations.h"

// 1 ) Newton's Second Law
/*******************************************************************************
* Function: calculate_newtons_2nd_law                                          *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates force from user given mass & acceleration            *
* Input parameters: Mass, Acceleration                                         *
* Returns: Force                                                               *
* Preconditions: Valid mass, acceleration inputs                               *
* Postconditions: Force is returned                                            *
********************************************************************************/
double calculate_newtons_2nd_law(double mass, double acceleration)
{
	double force = 0.0;					//local variable declaration
	force = mass * acceleration;		//calculation using inputs from the user from main.c
	return force;						//returns the variable of interest back to main.c
}										//The rest of the functions in this file follow a similar format

// 2 ) Cylindric Volume
/*******************************************************************************
* Function: calculate_volume_cylinder                                          *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates cylindrical volume from user given radius & height   *
* Input parameters: Radius, Height                                             *
* Returns: Volume of Cylinder                                                  *
* Preconditions: Valid radius, height inputs & defined constant                *
* Postconditions: Volume of cylinder is returned                               *
********************************************************************************/
double calculate_volume_cylinder(double radius, double height)
{
	double volume_cylinder = 0.0;
	volume_cylinder = PI  * pow(radius, 2) * height;
	return volume_cylinder;
}

// 3) Character Encoding
/*******************************************************************************
* Function: encoded_character                                                  *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Encoded an ASCII character based on the users input             *
* Input parameters: Plaintext_character                                        *
* Returns: Encoded_character                                                   *
* Preconditions: Valid character input                                         *
* Postconditions: Encoded character is returned                                *
********************************************************************************/
char perform_character_encoding(char plaintext_character)
{
	char encoded_character = '/0';	//null character
	encoded_character = 10 + (plaintext_character - 'a') + 'A';
	return encoded_character;
}

// 4 ) Gravitational Force
/*******************************************************************************
* Function: calculate_gravity_force                                            *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates gravitational force from user defined masses         *
    and distance                                                               *
* Input parameters: Mass1, Mass2, Acceleration                                 *
* Returns: Force                                                               *
* Preconditions: Valid mass, acceleration inputs                               *
* Postconditions: Gravitational Force is returned                              *
********************************************************************************/
double calculate_gravity_force(double mass1, double mass2, double distance)
{
	double force = 0.0;
	force = G * mass1 * mass2 / (pow(distance, 2));
	return force;
}

// 5 ) Tangent Eqation
/*******************************************************************************
* Function: calculate_tangent                                                  *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates the tangent of user defined angle (radians)          *
* Input parameters: Theta angle (rad)                                          *
* Returns: Tangent angle (rad)                                                 *
* Preconditions: Valid theta input                                             *
* Postconditions: Tangent is returned                                          *
********************************************************************************/
double calculate_tangent(double theta)
{
	double tangent = 0.0;
	tangent = sin(theta) / cos(theta);
	return tangent;
}

// 6 ) Parallel Resistance
/*******************************************************************************
* Function: calculate_parallel_resistance                                      *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates parallel resistance from three user defined          *
    resistance values														   *
* Input parameters: Resistor values R1, R2, R3                                 *
* Returns: Parallel_resistance                                                 *
* Preconditions: Valid resistance inputs                                       *
* Postconditions: Returns parallel_resistance                                  *
********************************************************************************/
double calculate_parallel_resistance(int r1, int r2, int r3)
{
	double parallel_resistance = 0.0;
	parallel_resistance = 1 / (((double)1 / r1) + ((double)1 / r2) + ((double)1 / r3)); //typecast double required for integer division
	return parallel_resistance;
}

// 7 ) Distance Between Two Points
/*******************************************************************************
* Function: calculate_distance_between_2pts                                    *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates distance between two (x,y) paired inputs             *
* Input parameters: x1, y1, x2, y2                                             *
* Returns: Distance between the coordiantes given                              *
* Preconditions: Valid (x,y) locations that should be different                *
* Postconditions: Distance between points is returned                          *
********************************************************************************/
double calculate_distance_between_2pts(double x1, double y1, double x2, double y2)
{
	double distance = 0.0;
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return distance;
}

// 8 ) General Equation
/*******************************************************************************
* Function: calculate_general_equation                                         *
* Date Created: Sept 11, 2017												   *
* Date Last Modified: Sept 11, 2017                                            *
* Description: Calculates a generalized equation based on three user inputs    *
* Input parameters: Integer a, doubles x & z                                   *
* Returns: general_equation ( y = )                                            *
* Preconditions: Valid variable inputs, even numbers divide by zero and break  *
* Postconditions: Solution to general equation returned                        *
********************************************************************************/
double calculate_general_equation(int a, double x, double z)
{
	double general_equation = 0.0;
	general_equation = (double)(7 / 5) * x / a + z - a / (a % 2) + PI; //typecast double required for precision
	return general_equation;
}


