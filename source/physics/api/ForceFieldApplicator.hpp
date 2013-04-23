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

#ifndef SMALLPHYSICS_API_FORCEFIELDAPPLICATOR
#define SMALLPHYSICS_API_FORCEFIELDAPPLICATOR

#include <vector>

#include "physics/api/ForceField.hpp"
#include "physics/api/PhysicalObject.hpp"

namespace Physics
{
	class ForceFieldApplicator
	{
	public:
		virtual ~ForceFieldApplicator() { }

		virtual void AffectObjects(std::vector<ForceField &> const &Fields, std::vector<PhysicalObject &> const &Objects) = 0;
	};
}

#endif
