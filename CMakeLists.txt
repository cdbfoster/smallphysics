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

cmake_minimum_required(VERSION 2.8)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
	message(FATAL_ERROR "In-source builds are not allowed!")
endif()

# Setup ===================================================

project(SmallPhysics)

set(PROJECT_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin/smallphysic")
set(INCLUDE_OUTPUT_PATH "${PROJECT_OUTPUT_PATH}/include/physics")
set(LIBRARY_OUTPUT_PATH "${PROJECT_OUTPUT_PATH}/lib")

option(BUILD_STATIC "Build the library for static linking.  Otherwise a shared library will be built." TRUE)

set(SMALLMATH_INCLUDE "smallmath/include" CACHE PATH "Path to the SmallMath include directory")
set(SMALLMATH_LIBRARY "smallmath/lib/libsmallmath.a" CACHE FILEPATH "SmallMath library file")

add_subdirectory(source)
