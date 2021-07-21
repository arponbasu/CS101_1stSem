/*
 * 5star.cxx
 * 
 * Copyright 2020 Arpon Basu <arpon@arpon-Vostro-3491>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <simplecpp>

int main(int argc, char **argv)
{
	turtleSim();
	
	
	repeat(5)
	{
		forward(100);
		right(144);
	}
	

	getchar();
	return 0;
}







































/*
 * 
 * g++ simplecpptest.cpp -o scpp
 * -Wall /home/arpon/Documents/Codes/simplecpp/lib/libsprite.a 
 * -I/home/arpon/Documents/Codes/simplecpp/include 
 * -I/usr/include/X11 
 * -L/usr/X11R6/lib -lX11 
 * -std=c++11 
 * 
 * 
 *  g++ simplecpptest.cpp -o scpp -std=c++11 -Wall $SCPP_LIB -I$SCPP_INCLUDE -I$X11_INCLUDE -L$X11_LIB -lX11
 * 
 */
