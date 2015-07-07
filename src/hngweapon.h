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
    
#ifndef HNGWEAPON_H
#define HNGWEAPON_H

#include "hnghashheader.h"

DWORD GET_WEAPON_HASH(std::string name);
void GET_WEAPON_NAME(std::string Hash, std::string& name);

static const std::string weapon_array[63][2] =
{
	{ "WEAPON_UNARMED", "-1569615261" },
	{ "WEAPON_ANIMAL", "-100946242" },
	{ "WEAPON_COUGAR", "148160082" },
	{ "WEAPON_KNIFE", "-1716189206" },
	{ "WEAPON_NIGHTSTICK", "1737195953" },
	{ "WEAPON_HAMMER", "1317494643" },
	{ "WEAPON_BAT", "-1786099057" },
	{ "WEAPON_GOLFCLUB", "1141786504" },
	{ "WEAPON_CROWBAR", "-2067956739" },
	{ "WEAPON_PISTOL", "453432689" },
	{ "WEAPON_COMBATPISTOL", "1593441988" },
	{ "WEAPON_APPISTOL", "584646201" },
	{ "WEAPON_PISTOL50", "-1716589765" },
	{ "WEAPON_MICROSMG", "324215364" },
	{ "WEAPON_SMG", "736523883" },
	{ "WEAPON_ASSAULTSMG", "-270015777" },
	{ "WEAPON_ASSAULTRIFLE", "-1074790547" },
	{ "WEAPON_CARBINERIFLE", "-2084633992" },
	{ "WEAPON_ADVANCEDRIFLE", "-1357824103" },
	{ "WEAPON_MG", "-1660422300" },
	{ "WEAPON_COMBATMG", "2144741730" },
	{ "WEAPON_PUMPSHOTGUN", "487013001" },
	{ "WEAPON_SAWNOFFSHOTGUN", "2017895192" },
	{ "WEAPON_ASSAULTSHOTGUN", "-494615257" },
	{ "WEAPON_BULLPUPSHOTGUN", "-1654528753" },
	{ "WEAPON_STUNGUN", "911657153" },
	{ "WEAPON_SNIPERRIFLE", "100416529" },
	{ "WEAPON_HEAVYSNIPER", "205991906" },
	{ "WEAPON_REMOTESNIPER", "856002082" },
	{ "WEAPON_GRENADELAUNCHER", "-1568386805" },
	{ "WEAPON_GRENADELAUNCHER_SMOKE", "1305664598" },
	{ "WEAPON_RPG", "-1312131151" },
	{ "WEAPON_PASSENGER_ROCKET", "375527679" },
	{ "WEAPON_AIRSTRIKE_ROCKET", "324506233" },
	{ "WEAPON_STINGER", "1752584910" },
	{ "WEAPON_MINIGUN", "1119849093" },
	{ "WEAPON_GRENADE", "-1813897027" },
	{ "WEAPON_STICKYBOMB", "741814745" },
	{ "WEAPON_SMOKEGRENADE", "-37975472" },
	{ "WEAPON_BZGAS", "-1600701090" },
	{ "WEAPON_MOLOTOV", "615608432" },
	{ "WEAPON_FIREEXTINGUISHER", "101631238" },
	{ "WEAPON_PETROLCAN", "883325847" },
	{ "WEAPON_DIGISCANNER", "-38085395" },
	{ "WEAPON_BRIEFCASE", "-2000187721" },
	{ "WEAPON_BRIEFCASE_02", "28811031" },
	{ "WEAPON_BALL", "600439132" },
	{ "WEAPON_FLARE", "1233104067" },
	{ "WEAPON_VEHICLE_ROCKET", "-1090665087" },
	{ "WEAPON_BARBED_WIRE", "1223143800" },
	{ "WEAPON_DROWNING", "-10959621" },
	{ "WEAPON_DROWNING_IN_VEHICLE", "1936677264" },
	{ "WEAPON_BLEEDING", "-1955384325" },
	{ "WEAPON_ELECTRIC_FENCE", "-1833087301" },
	{ "WEAPON_EXPLOSION", "539292904" },
	{ "WEAPON_FALL", "-842959696" },
	{ "WEAPON_EXHAUSTION", "910830060" },
	{ "WEAPON_HIT_BY_WATER_CANNON", "-868994466" },
	{ "WEAPON_RAMMED_BY_CAR", "133987706" },
	{ "WEAPON_RUN_OVER_BY_CAR", "-1553120962" },
	{ "WEAPON_HELI_CRASH", "341774354" },
	{ "WEAPON_FIRE", "-544306709" }
};

#endif // !HNGWEAPON_H
