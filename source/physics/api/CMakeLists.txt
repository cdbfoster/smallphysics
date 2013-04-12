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
	api/CollisionProperties.hpp
	api/Force.hpp
	api/ForceField.hpp
	api/PhysicalMotionState.hpp
	api/PhysicalObject.hpp
	api/PhysicalProperties.hpp
PARENT_SCOPE)

set(api_install_include
	CollisionProperties.hpp
	Force.hpp
	ForceField.hpp
	PhysicalMotionState.hpp
	PhysicalObject.hpp
	PhysicalProperties.hpp
)
set(API_INCLUDE_OUTPUT_PATH "${INCLUDE_OUTPUT_PATH}/api")

install(FILES
	${api_install_include}
DESTINATION ${API_INCLUDE_OUTPUT_PATH})
