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

#ifndef SMALLPHYSICS_API_PHYSICALOBJECT
#define SMALLPHYSICS_API_PHYSICALOBJECT

#include <vector>

#include "physics/api/CollisionProperties.hpp"
#include "physics/api/Force.hpp"
#include "physics/api/PhysicalMotionState.hpp"
#include "physics/api/PhysicalProperties.hpp"

namespace Physics
{
	class PhysicalObject
	{
		virtual ~PhysicalObject() { }

		virtual CollisionProperties &GetCollisionProperties() = 0;
		virtual CollisionProperties const &GetCollisionProperties() const = 0;

		virtual PhysicalProperties &GetPhysicalProperties() = 0;
		virtual PhysicalProperties const &GetPhysicalProperties() const = 0;

		virtual PhysicalMotionState &GetPhysicalMotionState() = 0;
		virtual PhysicalMotionState const &GetPhysicalMotionState() const = 0;

		virtual void AddForce(Force &Force) = 0;
		virtual void RemoveForce(Force &Force) = 0;
		virtual void GetForces(std::vector<Force *> &Forces) const = 0;
	};
}

#endif
