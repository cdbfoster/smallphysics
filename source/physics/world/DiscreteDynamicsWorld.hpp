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
	class DiscreteDynamicsWorld : public World
	{
	public:
		DiscreteDynamicsWorld(Physics::TimeStepper &TimeStepper, Physics::MotionIntegrator &MotionIntegrator,
							  Physics::CollisionDetector &CollisionDetector, Physics::ConstraintSolver &ConstraintSolver);
		virtual ~DiscreteDynamicsWorld();

		virtual void StepSimulation(float Time);

		virtual void AddObject(PhysicalObject &Object);
		virtual void AddConstraint(Constraint &Constraint);
		virtual void AddForceField(ForceField &Field);

		virtual void RemoveObject(PhysicalObject &Object);
		virtual void RemoveConstraint(Constraint &Constraint);
		virtual void RemoveForceField(ForceField &Field);

		virtual void ClearObjects();
		virtual void ClearConstraints();
		virtual void ClearForceFields();
		virtual void ClearWorld();

		virtual void GetObjects(std::vector<PhysicalObject *> &Objects) const;
		virtual void GetConstraints(std::vector<Constraint *> &Constraints) const;
		virtual void GetForceFields(std::vector<ForceField *> &ForceFields) const;

	private:
		Physics::TimeStepper &TimeStepper;
		Physics::MotionIntegrator &MotionIntegrator;
		Physics::CollisionDetector &CollisionDetector;
		Physics::ConstraintSolver &ConstraintSolver;

		std::vector<PhysicalObject *> Objects;
		std::vector<Constraint *> Constraints;
		std::vector<ForceField *> Fields;
	};
}

#endif
