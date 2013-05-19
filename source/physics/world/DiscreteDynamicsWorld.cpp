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

#include "physics/world/DiscreteDynamicsWorld.hpp"

using namespace Physics;

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::DiscreteDynamicsWorld()
{

}

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::~DiscreteDynamicsWorld() { }

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::StepSimulation(float Time)
{

}

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::AddObject(PhysicalObject &Object)
{
	this->Objects.push_back(&Object);
}

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::AddConstraint(Constraint &Constraint)
{
	this->Constraints.push_back(&Constraint);
}

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::AddForceField(ForceField &Field)
{
	this->Fields.push_back(&Field);
}

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::RemoveObject(PhysicalObject &Object)
{
	//this->Objects.
}

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::RemoveConstraint(Constraint &Constraint) { }
template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::RemoveForceField(ForceField &Field) { }

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::ClearObjects() { }
template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::ClearConstraints() { }
template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::ClearForceFields() { }
template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::ClearWorld() { }

template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::GetObjects(std::vector<PhysicalObject *> &Objects) const { }
template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::GetConstraints(std::vector<Constraint *> &Constraints) const { }
template <class _TimeStepper, class _MotionIntegrator, class _CollisionDetector, class _ConstraintSolver>
void DiscreteDynamicsWorld<_TimeStepper, _MotionIntegrator, _CollisionDetector, _ConstraintSolver>::GetForceFields(std::vector<ForceField *> &ForceFields) const { }
