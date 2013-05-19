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

#ifndef SMALLPHYSICS_API_COLLISIONRESULT
#define SMALLPHYSICS_API_COLLISIONRESULT

#include <vector>

#include "physics/api/PhysicalObject.hpp"

namespace Physics
{
	class CollisionResult
	{
	public:
		class Point;

		CollisionResult(PhysicalObject &ObjectA, PhysicalObject &ObjectB) : ObjectA(ObjectA), ObjectB(ObjectB) { }
		~CollisionResult() { }

		inline PhysicalObject &GetObjectA() const { return ObjectA; }
		inline PhysicalObject &GetObjectB() const { return ObjectB; }

		void AddCollisionPoint(const Point &Point);
		void GetCollisionPoints(std::vector<Point> &Points) const;

	private:
		PhysicalObject &ObjectA;
		PhysicalObject &ObjectB;

		std::vector<Point> Points;

	public:
		class Point
		{
		public:
			Point(Math::Vector3 const &LocalPointOnA, Math::Vector3 const &LocalPointOnB,
				  Math::Vector3 const &WorldPointOnA, Math::Vector3 const &WorldNormalOnA, float const &Distance);
			~Point() { }

			inline Math::Vector3 const &GetLocalPointOnA() const { return LocalPointOnA; }
			inline Math::Vector3 const &GetLocalPointOnB() const { return LocalPointOnB; }

			inline Math::Vector3 const &GetWorldPointOnA() const { return WorldPointOnA; }
			inline Math::Vector3 const &GetWorldPointOnB() const { return WorldPointOnB; }

			inline Math::Vector3 const &GetWorldNormalOnA() const { return WorldNormalOnA; }
			inline Math::Vector3 const &GetWorldNormalOnB() const { return WorldNormalOnB; }

			inline float const &GetDistance() const { return Distance; }

		private:
			Math::Vector3 LocalPointOnA;
			Math::Vector3 LocalPointOnB;

			Math::Vector3 WorldPointOnA;
			Math::Vector3 WorldPointOnB;

			Math::Vector3 WorldNormalOnA;
			Math::Vector3 WorldNormalOnB;

			float Distance;
		};
	};
}

#endif
