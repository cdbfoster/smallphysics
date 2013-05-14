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

DiscreteDynamicsWorld::DiscreteDynamicsWorld(Physics::TimeStepper &TimeStepper, Physics::MotionIntegrator &MotionIntegrator,
											 Physics::CollisionDetector &CollisionDetector, Physics::ConstraintSolver &ConstraintSolver) :
	TimeStepper(TimeStepper), MotionIntegrator(MotionIntegrator), CollisionDetector(CollisionDetector), ConstraintSolver(ConstraintSolver)
{
	this->Objects.clear();
	this->Constraints.clear();
	this->Fields.clear();
}

DiscreteDynamicsWorld::~DiscreteDynamicsWorld() { }

void DiscreteDynamicsWorld::StepSimulation(float Time)
{

}

void DiscreteDynamicsWorld::AddObject(PhysicalObject &Object)
{
	this->Objects.push_back(&Object);
}

void DiscreteDynamicsWorld::AddConstraint(Constraint &Constraint)
{
	this->Constraints.push_back(&Constraint);
}

void DiscreteDynamicsWorld::AddForceField(ForceField &Field)
{
	this->Fields.push_back(&Field);
}

void DiscreteDynamicsWorld::RemoveObject(PhysicalObject &Object)
{
	//this->Objects.
}

void DiscreteDynamicsWorld::RemoveConstraint(Constraint &Constraint) { }
void DiscreteDynamicsWorld::RemoveForceField(ForceField &Field) { }

void DiscreteDynamicsWorld::ClearObjects() { }
void DiscreteDynamicsWorld::ClearConstraints() { }
void DiscreteDynamicsWorld::ClearForceFields() { }
void DiscreteDynamicsWorld::ClearWorld() { }

void DiscreteDynamicsWorld::GetObjects(std::vector<PhysicalObject *> &Objects) const { }
void DiscreteDynamicsWorld::GetConstraints(std::vector<Constraint *> &Constraints) const { }
void DiscreteDynamicsWorld::GetForceFields(std::vector<ForceField *> &ForceFields) const { }
