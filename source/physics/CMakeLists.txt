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

set(smallphysics_include
)

set(smallphysics_source
)

add_subdirectory(api)

# To allow us to include files with #include "physics/category/File".
# This is important because other libraries will (should) refer to these files in
# the same way and this ensures that all paths are completed, regardless of where
# they're accessed from.
set(SOURCE "..")

include_directories(${SMALLMATH_INCLUDE} ${SOURCE})
add_executable(smallphysics main.cpp ${smallphysics_include} ${smallphysics_source})
target_link_libraries(smallphysics ${SMALLMATH_LIBRARY})
