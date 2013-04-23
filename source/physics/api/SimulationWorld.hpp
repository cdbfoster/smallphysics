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

#ifndef SMALLPHYSICS_API_SIMULATIONWORLD
#define SMALLPHYSICS_API_SIMULATIONWORLD

#include <list>

#include "physics/api/Constraint.hpp"
#include "physics/api/ForceField.hpp"
#include "physics/api/PhysicalObject.hpp"

namespace Physics
{
	class SimulationWorld
	{
	public:
		virtual ~SimulationWorld() { }

		virtual void StepSimulation(float Time) = 0;

		virtual void AddObject(PhysicalObject &Object) = 0;
		virtual void AddConstraint(Constraint &Constraint) = 0;
		virtual void AddForceField(ForceField &Field) = 0;

		virtual void RemoveObject(PhysicalObject &Object) = 0;
		virtual void RemoveConstraint(Constraint &Constraint) = 0;
		virtual void RemoveForceField(ForceField &Field) = 0;

		virtual void ClearObjects() = 0;
		virtual void ClearConstraints() = 0;
		virtual void ClearForceFields() = 0;
		virtual void ClearWorld() = 0;

		virtual std::list<PhysicalObject const &> GetObjects() const = 0;
		virtual std::list<Constraint const &> GetConstraints() const = 0;
		virtual std::list<ForceField const &> GetForceFields() const = 0;
	};
}

#endif
