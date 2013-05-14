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

#ifndef SMALLPHYSICS_API_COLLISIONDETECTOR
#define SMALLPHYSICS_API_COLLISIONDETECTOR

#include <list>
#include <vector>

#include "physics/api/CollisionResult.hpp"
#include "physics/api/PhysicalObject.hpp"

namespace Physics
{
	class CollisionDetector
	{
	public:
		virtual ~CollisionDetector() { }

		class ResultCache;

virtual void DetectCollisions(std::vector<PhysicalObject *> const &Objects, ResultCache &Results) = 0;

class ResultCache
{
public:
	typedef std::list<CollisionResult const *>::const_iterator const_iterator;

	~ResultCache()
	{
		for (const_iterator a = this->begin(); a != this->end(); ++a)
			delete *a;
	}

	const_iterator begin() const { return Results.begin(); }
	const_iterator end() const { return Results.end(); }

	void push_back(CollisionResult const *Result) { this->Results.push_back(Result); }

private:
	std::list<CollisionResult const *> Results;
};
	};
}

#endif
