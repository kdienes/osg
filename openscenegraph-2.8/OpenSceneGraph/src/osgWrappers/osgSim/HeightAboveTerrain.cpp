// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Node>
#include <osg/Vec3d>
#include <osgSim/HeightAboveTerrain>
#include <osgSim/LineOfSight>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgSim::HeightAboveTerrain)
	I_DeclaringFile("osgSim/HeightAboveTerrain");
	I_Constructor0(____HeightAboveTerrain,
	               "",
	               "");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "Clear the internal HAT List so it contains no height above terrain tests. ",
	          "");
	I_Method1(unsigned int, addPoint, IN, const osg::Vec3d &, point,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__addPoint__C5_osg_Vec3d_R1,
	          "Add a height above terrain test point in the CoordinateFrame. ",
	          "");
	I_Method0(unsigned int, getNumPoints,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumPoints,
	          "Get the number of height above terrain tests. ",
	          "");
	I_Method2(void, setPoint, IN, unsigned int, i, IN, const osg::Vec3d &, point,
	          Properties::NON_VIRTUAL,
	          __void__setPoint__unsigned_int__C5_osg_Vec3d_R1,
	          "Set the source point of single height above terrain test. ",
	          "");
	I_Method1(const osg::Vec3d &, getPoint, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3d_R1__getPoint__unsigned_int,
	          "Get the source point of single height above terrain test. ",
	          "");
	I_Method1(double, getHeightAboveTerrain, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __double__getHeightAboveTerrain__unsigned_int,
	          "Get the intersection height for a single height above terrain test. ",
	          "Note, you must call computeIntersections(..) before you can query the HeightAboveTerrain. If no intersections are found then height returned will be the height above mean sea level. ");
	I_Method1(void, setLowestHeight, IN, double, lowestHeight,
	          Properties::NON_VIRTUAL,
	          __void__setLowestHeight__double,
	          "Set the lowest height that the should be tested for. ",
	          "Defaults to -1000, i.e. 1000m below mean sea level. ");
	I_Method0(double, getLowestHeight,
	          Properties::NON_VIRTUAL,
	          __double__getLowestHeight,
	          "Get the lowest height that the should be tested for. ",
	          "");
	I_MethodWithDefaults2(void, computeIntersections, IN, osg::Node *, scene, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      Properties::NON_VIRTUAL,
	                      __void__computeIntersections__osg_Node_P1__osg_Node_NodeMask,
	                      "Compute the HAT intersections with the specified scene graph. ",
	                      "The results are all stored in the form of a single height above terrain value per HAT test. Note, if the topmost node is a CoordinateSystemNode then the input points are assumed to be geocentric, with the up vector defined by the EllipsoidModel attached to the CoordinateSystemNode. If the topmost node is not a CoordinateSystemNode then a local coordinates frame is assumed, with a local up vector. ");
	I_Method0(void, clearDatabaseCache,
	          Properties::NON_VIRTUAL,
	          __void__clearDatabaseCache,
	          "Clear the database cache. ",
	          "");
	I_Method1(void, setDatabaseCacheReadCallback, IN, osgSim::DatabaseCacheReadCallback *, dcrc,
	          Properties::NON_VIRTUAL,
	          __void__setDatabaseCacheReadCallback__DatabaseCacheReadCallback_P1,
	          "Set the ReadCallback that does the reading of external PagedLOD models, and caching of loaded subgraphs. ",
	          "Note, if you have multiple LineOfSight or HeightAboveTerrain objects in use at one time then you should share a single DatabaseCacheReadCallback between all of them. ");
	I_Method0(osgSim::DatabaseCacheReadCallback *, getDatabaseCacheReadCallback,
	          Properties::NON_VIRTUAL,
	          __DatabaseCacheReadCallback_P1__getDatabaseCacheReadCallback,
	          "Get the ReadCallback that does the reading of external PagedLOD models, and caching of loaded subgraphs. ",
	          "");
	I_StaticMethodWithDefaults3(double, computeHeightAboveTerrain, IN, osg::Node *, scene, , IN, const osg::Vec3d &, point, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                            __double__computeHeightAboveTerrain__osg_Node_P1__C5_osg_Vec3d_R1__osg_Node_NodeMask_S,
	                            "Compute the vertical distance between the specified scene graph and a single HAT point. ",
	                            "");
	I_SimpleProperty(osgSim::DatabaseCacheReadCallback *, DatabaseCacheReadCallback, 
	                 __DatabaseCacheReadCallback_P1__getDatabaseCacheReadCallback, 
	                 __void__setDatabaseCacheReadCallback__DatabaseCacheReadCallback_P1);
	I_SimpleProperty(double, LowestHeight, 
	                 __double__getLowestHeight, 
	                 __void__setLowestHeight__double);
	I_ArrayProperty(const osg::Vec3d &, Point, 
	                __C5_osg_Vec3d_R1__getPoint__unsigned_int, 
	                __void__setPoint__unsigned_int__C5_osg_Vec3d_R1, 
	                __unsigned_int__getNumPoints, 
	                __unsigned_int__addPoint__C5_osg_Vec3d_R1, 
	                0, 
	                0);
END_REFLECTOR

