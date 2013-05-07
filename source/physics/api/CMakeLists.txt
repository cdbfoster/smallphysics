# This file is part of SmallPhysics.
#
# SmallPhysics is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# SmallPhysics is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with SmallPhysics. If not, see <http://www.gnu.org/licenses/>.
#
# Copyright 2013 Chris Foster

set(smallphysics_include ${smallphysics_include}
	api/CollisionDetector.hpp
	api/CollisionPoint.hpp
	api/CollisionProperties.hpp
	api/CollisionResult.hpp
	api/CollisionShape.hpp
	api/Constraint.hpp
	api/ConstraintSolver.hpp
	api/Force.hpp
	api/ForceField.hpp
	api/ForceFieldApplicator.hpp
	api/MotionIntegrator.hpp
	api/PhysicalMotionState.hpp
	api/PhysicalObject.hpp
	api/PhysicalProperties.hpp
	api/TimeStepper.hpp
	api/World.hpp
PARENT_SCOPE)

set(api_install_include
	CollisionDetector.hpp
	CollisionPoint.hpp
	CollisionProperties.hpp
	CollisionResult.hpp
	CollisionShape.hpp
	Constraint.hpp
	ConstraintSolver.hpp
	Force.hpp
	ForceField.hpp
	ForceFieldApplicator.hpp
	MotionIntegrator.hpp
	PhysicalMotionState.hpp
	PhysicalObject.hpp
	PhysicalProperties.hpp
	TimeStepper.hpp
	World.hpp
)
set(API_INCLUDE_OUTPUT_PATH "${INCLUDE_OUTPUT_PATH}/api")

install(FILES
	${api_install_include}
DESTINATION ${API_INCLUDE_OUTPUT_PATH})
