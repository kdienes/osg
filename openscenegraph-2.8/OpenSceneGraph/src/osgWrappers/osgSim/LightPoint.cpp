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

#include <osg/Vec3>
#include <osg/Vec4>
#include <osgSim/BlinkSequence>
#include <osgSim/LightPoint>
#include <osgSim/Sector>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgSim::LightPoint::BlendingMode)
	I_DeclaringFile("osgSim/LightPoint");
	I_EnumLabel(osgSim::LightPoint::ADDITIVE);
	I_EnumLabel(osgSim::LightPoint::BLENDED);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgSim::LightPoint)
	I_DeclaringFile("osgSim/LightPoint");
	I_Constructor0(____LightPoint,
	               "",
	               "");
	I_Constructor2(IN, const osg::Vec3 &, position, IN, const osg::Vec4 &, color,
	               ____LightPoint__C5_osg_Vec3_R1__C5_osg_Vec4_R1,
	               "",
	               "");
	I_ConstructorWithDefaults8(IN, bool, on, , IN, const osg::Vec3 &, position, , IN, const osg::Vec4 &, color, , IN, float, intensity, 1.0f, IN, float, radius, 1.0f, IN, osgSim::Sector *, sector, 0, IN, osgSim::BlinkSequence *, blinkSequence, 0, IN, osgSim::LightPoint::BlendingMode, blendingMode, osgSim::LightPoint::BLENDED,
	                           ____LightPoint__bool__C5_osg_Vec3_R1__C5_osg_Vec4_R1__float__float__Sector_P1__BlinkSequence_P1__BlendingMode,
	                           "",
	                           "");
	I_Constructor1(IN, const osgSim::LightPoint &, lp,
	               Properties::NON_EXPLICIT,
	               ____LightPoint__C5_LightPoint_R1,
	               "",
	               "");
	I_PublicMemberProperty(bool, _on);
	I_PublicMemberProperty(osg::Vec3, _position);
	I_PublicMemberProperty(osg::Vec4, _color);
	I_PublicMemberProperty(float, _intensity);
	I_PublicMemberProperty(float, _radius);
	I_PublicMemberProperty(osg::ref_ptr< osgSim::Sector >, _sector);
	I_PublicMemberProperty(osg::ref_ptr< osgSim::BlinkSequence >, _blinkSequence);
	I_PublicMemberProperty(osgSim::LightPoint::BlendingMode, _blendingMode);
END_REFLECTOR

