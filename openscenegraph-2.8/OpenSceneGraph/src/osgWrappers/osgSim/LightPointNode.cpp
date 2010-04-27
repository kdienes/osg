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

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgSim/LightPoint>
#include <osgSim/LightPointNode>
#include <osgSim/LightPointSystem>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osgSim::LightPoint >, osgSim::LightPointNode::LightPointList)

BEGIN_OBJECT_REFLECTOR(osgSim::LightPointNode)
	I_DeclaringFile("osgSim/LightPointNode");
	I_BaseType(osg::Node);
	I_Constructor0(____LightPointNode,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::LightPointNode &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____LightPointNode__C5_LightPointNode_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method0(unsigned int, getNumLightPoints,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumLightPoints,
	          "",
	          "");
	I_Method1(unsigned int, addLightPoint, IN, const osgSim::LightPoint &, lp,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__addLightPoint__C5_LightPoint_R1,
	          "",
	          "");
	I_Method1(void, removeLightPoint, IN, unsigned int, pos,
	          Properties::NON_VIRTUAL,
	          __void__removeLightPoint__unsigned_int,
	          "",
	          "");
	I_Method1(osgSim::LightPoint &, getLightPoint, IN, unsigned int, pos,
	          Properties::NON_VIRTUAL,
	          __LightPoint_R1__getLightPoint__unsigned_int,
	          "",
	          "");
	I_Method1(const osgSim::LightPoint &, getLightPoint, IN, unsigned int, pos,
	          Properties::NON_VIRTUAL,
	          __C5_LightPoint_R1__getLightPoint__unsigned_int,
	          "",
	          "");
	I_Method1(void, setLightPointList, IN, const osgSim::LightPointNode::LightPointList &, lpl,
	          Properties::NON_VIRTUAL,
	          __void__setLightPointList__C5_LightPointList_R1,
	          "",
	          "");
	I_Method0(osgSim::LightPointNode::LightPointList &, getLightPointList,
	          Properties::NON_VIRTUAL,
	          __LightPointList_R1__getLightPointList,
	          "",
	          "");
	I_Method0(const osgSim::LightPointNode::LightPointList &, getLightPointList,
	          Properties::NON_VIRTUAL,
	          __C5_LightPointList_R1__getLightPointList,
	          "",
	          "");
	I_Method1(void, setMinPixelSize, IN, float, minPixelSize,
	          Properties::NON_VIRTUAL,
	          __void__setMinPixelSize__float,
	          "",
	          "");
	I_Method0(float, getMinPixelSize,
	          Properties::NON_VIRTUAL,
	          __float__getMinPixelSize,
	          "",
	          "");
	I_Method1(void, setMaxPixelSize, IN, float, maxPixelSize,
	          Properties::NON_VIRTUAL,
	          __void__setMaxPixelSize__float,
	          "",
	          "");
	I_Method0(float, getMaxPixelSize,
	          Properties::NON_VIRTUAL,
	          __float__getMaxPixelSize,
	          "",
	          "");
	I_Method1(void, setMaxVisibleDistance2, IN, float, maxVisibleDistance2,
	          Properties::NON_VIRTUAL,
	          __void__setMaxVisibleDistance2__float,
	          "",
	          "");
	I_Method0(float, getMaxVisibleDistance2,
	          Properties::NON_VIRTUAL,
	          __float__getMaxVisibleDistance2,
	          "",
	          "");
	I_Method1(void, setLightPointSystem, IN, osgSim::LightPointSystem *, lps,
	          Properties::NON_VIRTUAL,
	          __void__setLightPointSystem__osgSim_LightPointSystem_P1,
	          "",
	          "");
	I_Method0(osgSim::LightPointSystem *, getLightPointSystem,
	          Properties::NON_VIRTUAL,
	          __osgSim_LightPointSystem_P1__getLightPointSystem,
	          "",
	          "");
	I_MethodWithDefaults1(void, setPointSprite, IN, bool, enable, true,
	                      Properties::NON_VIRTUAL,
	                      __void__setPointSprite__bool,
	                      "",
	                      "");
	I_Method0(bool, getPointSprite,
	          Properties::NON_VIRTUAL,
	          __bool__getPointSprite,
	          "",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __osg_BoundingSphere__computeBound,
	          "Compute the bounding sphere around Node's geometry or children. ",
	          "This method is automatically called by getBound() when the bounding sphere has been marked dirty via dirtyBound(). ");
	I_ArrayProperty(const osgSim::LightPoint &, LightPoint, 
	                __C5_LightPoint_R1__getLightPoint__unsigned_int, 
	                0, 
	                __unsigned_int__getNumLightPoints, 
	                __unsigned_int__addLightPoint__C5_LightPoint_R1, 
	                0, 
	                __void__removeLightPoint__unsigned_int);
	I_SimpleProperty(const osgSim::LightPointNode::LightPointList &, LightPointList, 
	                 __C5_LightPointList_R1__getLightPointList, 
	                 __void__setLightPointList__C5_LightPointList_R1);
	I_SimpleProperty(osgSim::LightPointSystem *, LightPointSystem, 
	                 __osgSim_LightPointSystem_P1__getLightPointSystem, 
	                 __void__setLightPointSystem__osgSim_LightPointSystem_P1);
	I_SimpleProperty(float, MaxPixelSize, 
	                 __float__getMaxPixelSize, 
	                 __void__setMaxPixelSize__float);
	I_SimpleProperty(float, MaxVisibleDistance2, 
	                 __float__getMaxVisibleDistance2, 
	                 __void__setMaxVisibleDistance2__float);
	I_SimpleProperty(float, MinPixelSize, 
	                 __float__getMinPixelSize, 
	                 __void__setMinPixelSize__float);
	I_SimpleProperty(bool, PointSprite, 
	                 __bool__getPointSprite, 
	                 __void__setPointSprite__bool);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osgSim::LightPoint >)

