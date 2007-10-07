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

#include <osg/AnimationPath>
#include <osg/CopyOp>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Quat>
#include <osg/Vec3d>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< double COMMA  osg::AnimationPath::ControlPoint >, osg::AnimationPath::TimeControlPointMap)

BEGIN_ENUM_REFLECTOR(osg::AnimationPath::LoopMode)
	I_DeclaringFile("osg/AnimationPath");
	I_EnumLabel(osg::AnimationPath::SWING);
	I_EnumLabel(osg::AnimationPath::LOOP);
	I_EnumLabel(osg::AnimationPath::NO_LOOPING);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::AnimationPath)
	I_DeclaringFile("osg/AnimationPath");
	I_VirtualBaseType(osg::Object);
	I_Constructor0(____AnimationPath,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::AnimationPath &, ap, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____AnimationPath__C5_AnimationPath_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method2(bool, getMatrix, IN, double, time, IN, osg::Matrixf &, matrix,
	          Properties::NON_VIRTUAL,
	          __bool__getMatrix__double__Matrixf_R1,
	          "Given a specific time, return the transformation matrix for a point. ",
	          "");
	I_Method2(bool, getMatrix, IN, double, time, IN, osg::Matrixd &, matrix,
	          Properties::NON_VIRTUAL,
	          __bool__getMatrix__double__Matrixd_R1,
	          "Given a specific time, return the transformation matrix for a point. ",
	          "");
	I_Method2(bool, getInverse, IN, double, time, IN, osg::Matrixf &, matrix,
	          Properties::NON_VIRTUAL,
	          __bool__getInverse__double__Matrixf_R1,
	          "Given a specific time, return the inverse transformation matrix for a point. ",
	          "");
	I_Method2(bool, getInverse, IN, double, time, IN, osg::Matrixd &, matrix,
	          Properties::NON_VIRTUAL,
	          __bool__getInverse__double__Matrixd_R1,
	          "",
	          "");
	I_Method2(bool, getInterpolatedControlPoint, IN, double, time, IN, osg::AnimationPath::ControlPoint &, controlPoint,
	          Properties::VIRTUAL,
	          __bool__getInterpolatedControlPoint__double__ControlPoint_R1,
	          "Given a specific time, return the local ControlPoint frame for a point. ",
	          "");
	I_Method2(void, insert, IN, double, time, IN, const osg::AnimationPath::ControlPoint &, controlPoint,
	          Properties::NON_VIRTUAL,
	          __void__insert__double__C5_ControlPoint_R1,
	          "",
	          "");
	I_Method0(double, getFirstTime,
	          Properties::NON_VIRTUAL,
	          __double__getFirstTime,
	          "",
	          "");
	I_Method0(double, getLastTime,
	          Properties::NON_VIRTUAL,
	          __double__getLastTime,
	          "",
	          "");
	I_Method0(double, getPeriod,
	          Properties::NON_VIRTUAL,
	          __double__getPeriod,
	          "",
	          "");
	I_Method1(void, setLoopMode, IN, osg::AnimationPath::LoopMode, lm,
	          Properties::NON_VIRTUAL,
	          __void__setLoopMode__LoopMode,
	          "",
	          "");
	I_Method0(osg::AnimationPath::LoopMode, getLoopMode,
	          Properties::NON_VIRTUAL,
	          __LoopMode__getLoopMode,
	          "",
	          "");
	I_Method1(void, setTimeControlPointMap, IN, osg::AnimationPath::TimeControlPointMap &, tcpm,
	          Properties::NON_VIRTUAL,
	          __void__setTimeControlPointMap__TimeControlPointMap_R1,
	          "",
	          "");
	I_Method0(osg::AnimationPath::TimeControlPointMap &, getTimeControlPointMap,
	          Properties::NON_VIRTUAL,
	          __TimeControlPointMap_R1__getTimeControlPointMap,
	          "",
	          "");
	I_Method0(const osg::AnimationPath::TimeControlPointMap &, getTimeControlPointMap,
	          Properties::NON_VIRTUAL,
	          __C5_TimeControlPointMap_R1__getTimeControlPointMap,
	          "",
	          "");
	I_Method0(bool, empty,
	          Properties::NON_VIRTUAL,
	          __bool__empty,
	          "",
	          "");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "",
	          "");
	I_Method1(void, read, IN, std::istream &, in,
	          Properties::NON_VIRTUAL,
	          __void__read__std_istream_R1,
	          "Read the animation path from a flat ASCII file stream. ",
	          "");
	I_Method1(void, write, IN, std::ostream &, out,
	          Properties::NON_VIRTUAL,
	          __void__write__std_ostream_R1,
	          "Write the animation path to a flat ASCII file stream. ",
	          "");
	I_SimpleProperty(double, FirstTime, 
	                 __double__getFirstTime, 
	                 0);
	I_SimpleProperty(double, LastTime, 
	                 __double__getLastTime, 
	                 0);
	I_SimpleProperty(osg::AnimationPath::LoopMode, LoopMode, 
	                 __LoopMode__getLoopMode, 
	                 __void__setLoopMode__LoopMode);
	I_SimpleProperty(double, Period, 
	                 __double__getPeriod, 
	                 0);
	I_SimpleProperty(osg::AnimationPath::TimeControlPointMap &, TimeControlPointMap, 
	                 __TimeControlPointMap_R1__getTimeControlPointMap, 
	                 __void__setTimeControlPointMap__TimeControlPointMap_R1);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::AnimationPath::ControlPoint)
	I_DeclaringFile("osg/AnimationPath");
	I_Constructor0(____ControlPoint,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec3d &, position,
	               Properties::NON_EXPLICIT,
	               ____ControlPoint__C5_osg_Vec3d_R1,
	               "",
	               "");
	I_Constructor2(IN, const osg::Vec3d &, position, IN, const osg::Quat &, rotation,
	               ____ControlPoint__C5_osg_Vec3d_R1__C5_osg_Quat_R1,
	               "",
	               "");
	I_Constructor3(IN, const osg::Vec3d &, position, IN, const osg::Quat &, rotation, IN, const osg::Vec3d &, scale,
	               ____ControlPoint__C5_osg_Vec3d_R1__C5_osg_Quat_R1__C5_osg_Vec3d_R1,
	               "",
	               "");
	I_Method1(void, setPosition, IN, const osg::Vec3d &, position,
	          Properties::NON_VIRTUAL,
	          __void__setPosition__C5_osg_Vec3d_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3d &, getPosition,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3d_R1__getPosition,
	          "",
	          "");
	I_Method1(void, setRotation, IN, const osg::Quat &, rotation,
	          Properties::NON_VIRTUAL,
	          __void__setRotation__C5_osg_Quat_R1,
	          "",
	          "");
	I_Method0(const osg::Quat &, getRotation,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Quat_R1__getRotation,
	          "",
	          "");
	I_Method1(void, setScale, IN, const osg::Vec3d &, scale,
	          Properties::NON_VIRTUAL,
	          __void__setScale__C5_osg_Vec3d_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3d &, getScale,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3d_R1__getScale,
	          "",
	          "");
	I_Method3(void, interpolate, IN, float, ratio, IN, const osg::AnimationPath::ControlPoint &, first, IN, const osg::AnimationPath::ControlPoint &, second,
	          Properties::NON_VIRTUAL,
	          __void__interpolate__float__C5_ControlPoint_R1__C5_ControlPoint_R1,
	          "",
	          "");
	I_Method3(void, interpolate, IN, double, ratio, IN, const osg::AnimationPath::ControlPoint &, first, IN, const osg::AnimationPath::ControlPoint &, second,
	          Properties::NON_VIRTUAL,
	          __void__interpolate__double__C5_ControlPoint_R1__C5_ControlPoint_R1,
	          "",
	          "");
	I_Method1(void, getMatrix, IN, osg::Matrixf &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__getMatrix__Matrixf_R1,
	          "",
	          "");
	I_Method1(void, getMatrix, IN, osg::Matrixd &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__getMatrix__Matrixd_R1,
	          "",
	          "");
	I_Method1(void, getInverse, IN, osg::Matrixf &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__getInverse__Matrixf_R1,
	          "",
	          "");
	I_Method1(void, getInverse, IN, osg::Matrixd &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__getInverse__Matrixd_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec3d &, Position, 
	                 __C5_osg_Vec3d_R1__getPosition, 
	                 __void__setPosition__C5_osg_Vec3d_R1);
	I_SimpleProperty(const osg::Quat &, Rotation, 
	                 __C5_osg_Quat_R1__getRotation, 
	                 __void__setRotation__C5_osg_Quat_R1);
	I_SimpleProperty(const osg::Vec3d &, Scale, 
	                 __C5_osg_Vec3d_R1__getScale, 
	                 __void__setScale__C5_osg_Vec3d_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::AnimationPathCallback)
	I_DeclaringFile("osg/AnimationPath");
	I_BaseType(osg::NodeCallback);
	I_Constructor0(____AnimationPathCallback,
	               "",
	               "");
	I_Constructor2(IN, const osg::AnimationPathCallback &, apc, IN, const osg::CopyOp &, copyop,
	               ____AnimationPathCallback__C5_AnimationPathCallback_R1__C5_CopyOp_R1,
	               "",
	               "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_ConstructorWithDefaults3(IN, osg::AnimationPath *, ap, , IN, double, timeOffset, 0.0, IN, double, timeMultiplier, 1.0,
	                           ____AnimationPathCallback__AnimationPath_P1__double__double,
	                           "Construct an AnimationPathCallback with a specified animation path. ",
	                           "");
	I_Constructor3(IN, const osg::Vec3d &, pivot, IN, const osg::Vec3d &, axis, IN, float, angularVelocity,
	               ____AnimationPathCallback__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1__float,
	               "Construct an AnimationPathCallback and automatical create an animation path to produce a rotation about a point. ",
	               "");
	I_Method1(void, setAnimationPath, IN, osg::AnimationPath *, path,
	          Properties::NON_VIRTUAL,
	          __void__setAnimationPath__AnimationPath_P1,
	          "",
	          "");
	I_Method0(osg::AnimationPath *, getAnimationPath,
	          Properties::NON_VIRTUAL,
	          __AnimationPath_P1__getAnimationPath,
	          "",
	          "");
	I_Method0(const osg::AnimationPath *, getAnimationPath,
	          Properties::NON_VIRTUAL,
	          __C5_AnimationPath_P1__getAnimationPath,
	          "",
	          "");
	I_Method1(void, setPivotPoint, IN, const osg::Vec3d &, pivot,
	          Properties::NON_VIRTUAL,
	          __void__setPivotPoint__C5_Vec3d_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3d &, getPivotPoint,
	          Properties::NON_VIRTUAL,
	          __C5_Vec3d_R1__getPivotPoint,
	          "",
	          "");
	I_Method1(void, setUseInverseMatrix, IN, bool, useInverseMatrix,
	          Properties::NON_VIRTUAL,
	          __void__setUseInverseMatrix__bool,
	          "",
	          "");
	I_Method0(bool, getUseInverseMatrix,
	          Properties::NON_VIRTUAL,
	          __bool__getUseInverseMatrix,
	          "",
	          "");
	I_Method1(void, setTimeOffset, IN, double, offset,
	          Properties::NON_VIRTUAL,
	          __void__setTimeOffset__double,
	          "",
	          "");
	I_Method0(double, getTimeOffset,
	          Properties::NON_VIRTUAL,
	          __double__getTimeOffset,
	          "",
	          "");
	I_Method1(void, setTimeMultiplier, IN, double, multiplier,
	          Properties::NON_VIRTUAL,
	          __void__setTimeMultiplier__double,
	          "",
	          "");
	I_Method0(double, getTimeMultiplier,
	          Properties::NON_VIRTUAL,
	          __double__getTimeMultiplier,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method1(void, setPause, IN, bool, pause,
	          Properties::NON_VIRTUAL,
	          __void__setPause__bool,
	          "",
	          "");
	I_Method0(bool, getPause,
	          Properties::NON_VIRTUAL,
	          __bool__getPause,
	          "",
	          "");
	I_Method0(double, getAnimationTime,
	          Properties::NON_VIRTUAL,
	          __double__getAnimationTime,
	          "Get the animation time that is used to specify the position along the AnimationPath. ",
	          "Animation time is computed from the formula: ((_latestTime-_firstTime)-_timeOffset)*_timeMultiplier. ");
	I_Method1(void, update, IN, osg::Node &, node,
	          Properties::NON_VIRTUAL,
	          __void__update__osg_Node_R1,
	          "",
	          "");
	I_SimpleProperty(osg::AnimationPath *, AnimationPath, 
	                 __AnimationPath_P1__getAnimationPath, 
	                 __void__setAnimationPath__AnimationPath_P1);
	I_SimpleProperty(double, AnimationTime, 
	                 __double__getAnimationTime, 
	                 0);
	I_SimpleProperty(bool, Pause, 
	                 __bool__getPause, 
	                 __void__setPause__bool);
	I_SimpleProperty(const osg::Vec3d &, PivotPoint, 
	                 __C5_Vec3d_R1__getPivotPoint, 
	                 __void__setPivotPoint__C5_Vec3d_R1);
	I_SimpleProperty(double, TimeMultiplier, 
	                 __double__getTimeMultiplier, 
	                 __void__setTimeMultiplier__double);
	I_SimpleProperty(double, TimeOffset, 
	                 __double__getTimeOffset, 
	                 __void__setTimeOffset__double);
	I_SimpleProperty(bool, UseInverseMatrix, 
	                 __bool__getUseInverseMatrix, 
	                 __void__setUseInverseMatrix__bool);
	I_PublicMemberProperty(osg::ref_ptr< osg::AnimationPath >, _animationPath);
	I_PublicMemberProperty(osg::Vec3d, _pivotPoint);
	I_PublicMemberProperty(bool, _useInverseMatrix);
	I_PublicMemberProperty(double, _timeOffset);
	I_PublicMemberProperty(double, _timeMultiplier);
	I_PublicMemberProperty(double, _firstTime);
	I_PublicMemberProperty(double, _latestTime);
	I_PublicMemberProperty(bool, _pause);
	I_PublicMemberProperty(double, _pauseTime);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< double COMMA  osg::AnimationPath::ControlPoint >)

