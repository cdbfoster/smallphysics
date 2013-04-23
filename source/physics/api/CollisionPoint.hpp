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

#ifndef SMALLPHYSICS_API_COLLISIONPOINT
#define SMALLPHYSICS_API_COLLISIONPOINT

#include "math/Vector.hpp"

namespace Physics
{
	class CollisionPoint
	{
	public:
		virtual ~CollisionPoint() { }

		virtual Math::Vector3 GetLocalPointOnA() const = 0;
		virtual Math::Vector3 GetLocalPointOnB() const = 0;

		virtual Math::Vector3 GetWorldPointOnA() const = 0;
		virtual Math::Vector3 GetWorldPointOnB() const = 0;

		virtual Math::Vector3 GetWorldNormalOnA() const = 0;
		virtual Math::Vector3 GetWorldNormalOnB() const = 0;

		virtual float GetDistance() const = 0;
	};
}

#endif
