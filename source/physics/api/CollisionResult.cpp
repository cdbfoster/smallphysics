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

#include "physics/api/CollisionResult.hpp"

using namespace Physics;

void CollisionResult::AddCollisionPoint(CollisionResult::Point const &Point)
{
	this->Points.push_back(Point);
}

void CollisionResult::GetCollisionPoints(std::vector<CollisionResult::Point> &Points) const
{
	Points.reserve(Points.size() + this->Points.size());

	std::vector<Point>::const_iterator a;
	for (a = this->Points.begin(); a != this->Points.end(); ++a)
		Points.push_back(*a);
}

CollisionResult::Point::Point(Math::Vector3 const &LocalPointOnA, Math::Vector3 const &LocalPointOnB,
							  Math::Vector3 const &WorldPointOnA, Math::Vector3 const &WorldNormalOnA, float const &Distance)
{
	this->LocalPointOnA = LocalPointOnA;
	this->LocalPointOnB = LocalPointOnB;

	this->WorldPointOnA = WorldPointOnA;
	this->WorldNormalOnA = WorldNormalOnA;

	this->WorldPointOnB = this->WorldPointOnA + (this->WorldNormalOnA * Distance);
	this->WorldNormalOnB = this->WorldNormalOnA * -1.0f;

	this->Distance = Distance;
}
