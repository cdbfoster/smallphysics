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

#ifndef SMALLPHYSICS_API_WORLD
#define SMALLPHYSICS_API_WORLD

#include <vector>

#include "physics/api/Constraint.hpp"
#include "physics/api/ForceField.hpp"
#include "physics/api/PhysicalObject.hpp"

namespace Physics
{
	template <class Derived>
	class World
	{
	public:
		void StepSimulation(float Time);

		void AddObject(PhysicalObject &Object);
		void AddConstraint(Constraint &Constraint);
		void AddForceField(ForceField &Field);

		void RemoveObject(PhysicalObject &Object) = 0;
		void RemoveConstraint(Constraint &Constraint) = 0;
		void RemoveForceField(ForceField &Field) = 0;

		void ClearObjects();
		void ClearConstraints();
		void ClearForceFields();
		void ClearWorld();

		void GetObjects(std::vector<PhysicalObject *> &Objects) const;
		void GetConstraints(std::vector<Constraint *> &Constraints) const;
		void GetForceFields(std::vector<ForceField *> &ForceFields) const;
	};



	template <class Derived>
	void World<Derived>::StepSimulation(float Time) { static_cast<Derived *>(this)->StepSimulation(Time); }

	template <class Derived>
	void World<Derived>::AddObject(PhysicalObject &Object) { static_cast<Derived *>(this)->AddObject(Object); }
	template <class Derived>
	void World<Derived>::AddConstraint(Constraint &Constraint) { static_cast<Derived *>(this)->AddConstraint(Constraint); }
	template <class Derived>
	void World<Derived>::AddForceField(ForceField &Field) { static_cast<Derived *>(this)->AddForceField(Field); }

	template <class Derived>
	void World<Derived>::RemoveObject(PhysicalObject &Object) { static_cast<Derived *>(this)->RemoveObject(Object); }
	template <class Derived>
	void World<Derived>::RemoveConstraint(Constraint &Constraint) { static_cast<Derived *>(this)->RemoveConstraint(Constraint); }
	template <class Derived>
	void World<Derived>::RemoveForceField(ForceField &Field) { static_cast<Derived *>(this)->RemoveForceField(Field); }

	template <class Derived>
	void World<Derived>::ClearObjects() { static_cast<Derived *>(this)->ClearObjects(); }
	template <class Derived>
	void World<Derived>::ClearConstraints() { static_cast<Derived *>(this)->ClearConstraints(); }
	template <class Derived>
	void World<Derived>::ClearForceFields() { static_cast<Derived *>(this)->ClearForceFields(); }
	template <class Derived>
	void World<Derived>::ClearWorld() { static_cast<Derived *>(this)->ClearWorld(); }

	template <class Derived>
	void World<Derived>::GetObjects(std::vector<PhysicalObject *> &Objects) const { static_cast<Derived *>(this)->GetObjects(Objects); }
	template <class Derived>
	void World<Derived>::GetConstraints(std::vector<Constraint *> &Constraints) const { static_cast<Derived *>(this)->GetConstraints(Constraints); }
	template <class Derived>
	void World<Derived>::GetForceFields(std::vector<ForceField *> &Fields) const { static_cast<Derived *>(this)->GetForceFields(Fields); }
}

#endif
