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

#ifndef PHYSICS_WORLD_DISCRETEDYNAMICSWORLD
#define PHYSICS_WORLD_DISCRETEDYNAMICSWORLD

#include <vector>

#include "physics/api/CollisionDetector.hpp"
#include "physics/api/Constraint.hpp"
#include "physics/api/ConstraintSolver.hpp"
#include "physics/api/ForceField.hpp"
#include "physics/api/MotionIntegrator.hpp"
#include "physics/api/PhysicalObject.hpp"
#include "physics/api/TimeStepper.hpp"
#include "physics/api/World.hpp"

namespace Physics
{
	template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
	class DiscreteDynamicsWorld : public World<DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver> >
	{
	public:
		DiscreteDynamicsWorld();
		~DiscreteDynamicsWorld();

		void StepSimulation(float Time);

		void AddObject(PhysicalObject &Object);
		void AddConstraint(Constraint &Constraint);
		void AddForceField(ForceField &Field);

		void RemoveObject(PhysicalObject &Object);
		void RemoveConstraint(Constraint &Constraint);
		void RemoveForceField(ForceField &Field);

		void ClearObjects();
		void ClearConstraints();
		void ClearForceFields();
		void ClearWorld();

		void GetObjects(std::vector<PhysicalObject *> &Objects) const;
		void GetConstraints(std::vector<Constraint *> &Constraints) const;
		void GetForceFields(std::vector<ForceField *> &ForceFields) const;

	private:
		_TimeStepper TimeStepper;
		_MotionIntegrator MotionIntegrator;
		_CollisionDetector CollisionDetector;
		_ConstraintSolver ConstraintSolver;

		std::vector<PhysicalObject *> Objects;
		std::vector<Constraint *> Constraints;
		std::vector<ForceField *> Fields;
	};
}

#endif
