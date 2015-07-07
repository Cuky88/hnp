/*
    The code should not be re-ditributed without the permission of lulzmodder
    Copyright (C) 2015  lulzmodder
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    */
    
#include "hngprop.h"

DWORD GET_PROP_HASH(std::string name) //for debugging
{
	for (int i = 0; i < 3300; i++)
		if (prop_array[i][0].compare(name) == 0)
			return std::stol(prop_array[i][0]);
	return -1;
}

void GET_PROP_NAME(std::string Hash, std::string& name)
{
	for (int i = 0; i < 3300; i++)
	{
		if (prop_array[i][1].compare(Hash) == 0)
		{
			name = prop_array[i][0];
			break;
		}
	}
}
