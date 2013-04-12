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

#ifndef SMALLPHYSICS_PHYSICALOBJECT
#define SMALLPHYSICS_PHYSICALOBJECT

#include "physics/api/CollisionProperties.hpp"
#include "physics/api/Force.hpp"
#include "physics/api/PhysicalMotionState.hpp"
#include "physics/api/PhysicalProperties.hpp"

namespace Physics
{
	class PhysicalObject
	{
		virtual ~PhysicalObject() { }

		CollisionProperties &GetCollisionProperties() = 0;
		CollisionProperties const &GetCollisionProperties() const = 0;

		PhysicalProperties &GetPhysicalProperties() = 0;
		PhysicalProperties const &GetPhysicalProperties() const = 0;

		PhysicalMotionState &GetPhysicalMotionState() = 0;
		PhysicalMotionState const &GetPhysicalMotionState() const = 0;

		void ApplyForce(Force &Force) = 0;
	};
}

#endif
