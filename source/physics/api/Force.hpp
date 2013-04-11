/*
* This file is part of SmallPhysics.
*
* SmallPhysics is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* SmallPhysics is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with SmallPhysics. If not, see <http://www.gnu.org/licenses/>.
*
* Copyright 2013 Chris Foster
*/

#ifndef SMALLPHYSICSLIB_FORCE
#define SMALLPHYSICSLIB_FORCE

#include "math/Vector.hpp"
#include "math/Quaternion.hpp"

namespace Physics
{
	class Force
	{
	public:
		virtual ~Force() { }
	
		virtual Math::Vector3 GetMagnitude() = 0; // should be const in a sec here..
	
		virtual float AdvanceTime(float DeltaTime) = 0;
		virtual float GetTimeRemaining() = 0; // same
	};
}

#endif

