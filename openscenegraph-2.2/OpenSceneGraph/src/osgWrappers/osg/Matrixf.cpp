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

#include <osg/CopyOp>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/Object>
#include <osg/Quat>
#include <osg/Vec3d>
#include <osg/Vec3f>
#include <osg/Vec4d>
#include <osg/Vec4f>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(float, osg::Matrixf::value_type)

BEGIN_VALUE_REFLECTOR(osg::Matrixf)
	I_DeclaringFile("osg/Matrixf");
	I_Constructor0(____Matrixf,
	               "",
	               "");
	I_Constructor1(IN, const osg::Matrixf &, mat,
	               Properties::NON_EXPLICIT,
	               ____Matrixf__C5_Matrixf_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::Matrixd &, mat,
	               Properties::NON_EXPLICIT,
	               ____Matrixf__C5_Matrixd_R1,
	               "",
	               "");
	I_Constructor1(IN, float const *const, ptr,
	               Properties::EXPLICIT,
	               ____Matrixf__float_C5_P1C5,
	               "",
	               "");
	I_Constructor1(IN, double const *const, ptr,
	               Properties::EXPLICIT,
	               ____Matrixf__double_C5_P1C5,
	               "",
	               "");
	I_Constructor1(IN, const osg::Quat &, quat,
	               Properties::EXPLICIT,
	               ____Matrixf__C5_Quat_R1,
	               "",
	               "");
	I_Constructor16(IN, osg::Matrixf::value_type, a00, IN, osg::Matrixf::value_type, a01, IN, osg::Matrixf::value_type, a02, IN, osg::Matrixf::value_type, a03, IN, osg::Matrixf::value_type, a10, IN, osg::Matrixf::value_type, a11, IN, osg::Matrixf::value_type, a12, IN, osg::Matrixf::value_type, a13, IN, osg::Matrixf::value_type, a20, IN, osg::Matrixf::value_type, a21, IN, osg::Matrixf::value_type, a22, IN, osg::Matrixf::value_type, a23, IN, osg::Matrixf::value_type, a30, IN, osg::Matrixf::value_type, a31, IN, osg::Matrixf::value_type, a32, IN, osg::Matrixf::value_type, a33,
	                ____Matrixf__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type,
	                "",
	                "");
	I_Method1(int, compare, IN, const osg::Matrixf &, m,
	          Properties::NON_VIRTUAL,
	          __int__compare__C5_Matrixf_R1,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(bool, isNaN,
	          Properties::NON_VIRTUAL,
	          __bool__isNaN,
	          "",
	          "");
	I_Method1(void, set, IN, const osg::Matrixf &, rhs,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Matrixf_R1,
	          "",
	          "");
	I_Method1(void, set, IN, const osg::Matrixd &, rhs,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Matrixd_R1,
	          "",
	          "");
	I_Method1(void, set, IN, float const *const, ptr,
	          Properties::NON_VIRTUAL,
	          __void__set__float_C5_P1C5,
	          "",
	          "");
	I_Method1(void, set, IN, double const *const, ptr,
	          Properties::NON_VIRTUAL,
	          __void__set__double_C5_P1C5,
	          "",
	          "");
	I_Method16(void, set, IN, osg::Matrixf::value_type, a00, IN, osg::Matrixf::value_type, a01, IN, osg::Matrixf::value_type, a02, IN, osg::Matrixf::value_type, a03, IN, osg::Matrixf::value_type, a10, IN, osg::Matrixf::value_type, a11, IN, osg::Matrixf::value_type, a12, IN, osg::Matrixf::value_type, a13, IN, osg::Matrixf::value_type, a20, IN, osg::Matrixf::value_type, a21, IN, osg::Matrixf::value_type, a22, IN, osg::Matrixf::value_type, a23, IN, osg::Matrixf::value_type, a30, IN, osg::Matrixf::value_type, a31, IN, osg::Matrixf::value_type, a32, IN, osg::Matrixf::value_type, a33,
	           Properties::NON_VIRTUAL,
	           __void__set__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type__value_type,
	           "",
	           "");
	I_Method0(osg::Matrixf::value_type *, ptr,
	          Properties::NON_VIRTUAL,
	          __value_type_P1__ptr,
	          "",
	          "");
	I_Method0(const osg::Matrixf::value_type *, ptr,
	          Properties::NON_VIRTUAL,
	          __C5_value_type_P1__ptr,
	          "",
	          "");
	I_Method0(bool, isIdentity,
	          Properties::NON_VIRTUAL,
	          __bool__isIdentity,
	          "",
	          "");
	I_Method0(void, makeIdentity,
	          Properties::NON_VIRTUAL,
	          __void__makeIdentity,
	          "",
	          "");
	I_Method1(void, makeScale, IN, const osg::Vec3f &, x,
	          Properties::NON_VIRTUAL,
	          __void__makeScale__C5_Vec3f_R1,
	          "",
	          "");
	I_Method1(void, makeScale, IN, const osg::Vec3d &, x,
	          Properties::NON_VIRTUAL,
	          __void__makeScale__C5_Vec3d_R1,
	          "",
	          "");
	I_Method3(void, makeScale, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, x,
	          Properties::NON_VIRTUAL,
	          __void__makeScale__value_type__value_type__value_type,
	          "",
	          "");
	I_Method1(void, makeTranslate, IN, const osg::Vec3f &, x,
	          Properties::NON_VIRTUAL,
	          __void__makeTranslate__C5_Vec3f_R1,
	          "",
	          "");
	I_Method1(void, makeTranslate, IN, const osg::Vec3d &, x,
	          Properties::NON_VIRTUAL,
	          __void__makeTranslate__C5_Vec3d_R1,
	          "",
	          "");
	I_Method3(void, makeTranslate, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, x,
	          Properties::NON_VIRTUAL,
	          __void__makeTranslate__value_type__value_type__value_type,
	          "",
	          "");
	I_Method2(void, makeRotate, IN, const osg::Vec3f &, from, IN, const osg::Vec3f &, to,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__C5_Vec3f_R1__C5_Vec3f_R1,
	          "",
	          "");
	I_Method2(void, makeRotate, IN, const osg::Vec3d &, from, IN, const osg::Vec3d &, to,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__C5_Vec3d_R1__C5_Vec3d_R1,
	          "",
	          "");
	I_Method2(void, makeRotate, IN, osg::Matrixf::value_type, angle, IN, const osg::Vec3f &, axis,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__value_type__C5_Vec3f_R1,
	          "",
	          "");
	I_Method2(void, makeRotate, IN, osg::Matrixf::value_type, angle, IN, const osg::Vec3d &, axis,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__value_type__C5_Vec3d_R1,
	          "",
	          "");
	I_Method4(void, makeRotate, IN, osg::Matrixf::value_type, angle, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, y, IN, osg::Matrixf::value_type, z,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__value_type__value_type__value_type__value_type,
	          "",
	          "");
	I_Method1(void, makeRotate, IN, const osg::Quat &, x,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__C5_Quat_R1,
	          "",
	          "");
	I_Method6(void, makeRotate, IN, osg::Matrixf::value_type, angle1, IN, const osg::Vec3f &, axis1, IN, osg::Matrixf::value_type, angle2, IN, const osg::Vec3f &, axis2, IN, osg::Matrixf::value_type, angle3, IN, const osg::Vec3f &, axis3,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__value_type__C5_Vec3f_R1__value_type__C5_Vec3f_R1__value_type__C5_Vec3f_R1,
	          "",
	          "");
	I_Method6(void, makeRotate, IN, osg::Matrixf::value_type, angle1, IN, const osg::Vec3d &, axis1, IN, osg::Matrixf::value_type, angle2, IN, const osg::Vec3d &, axis2, IN, osg::Matrixf::value_type, angle3, IN, const osg::Vec3d &, axis3,
	          Properties::NON_VIRTUAL,
	          __void__makeRotate__value_type__C5_Vec3d_R1__value_type__C5_Vec3d_R1__value_type__C5_Vec3d_R1,
	          "",
	          "");
	I_Method4(void, decompose, IN, osg::Vec3f &, translation, IN, osg::Quat &, rotation, IN, osg::Vec3f &, scale, IN, osg::Quat &, so,
	          Properties::NON_VIRTUAL,
	          __void__decompose__osg_Vec3f_R1__osg_Quat_R1__osg_Vec3f_R1__osg_Quat_R1,
	          "decompose the matrix into translation, rotation, scale and scale orietation. ",
	          "");
	I_Method4(void, decompose, IN, osg::Vec3d &, translation, IN, osg::Quat &, rotation, IN, osg::Vec3d &, scale, IN, osg::Quat &, so,
	          Properties::NON_VIRTUAL,
	          __void__decompose__osg_Vec3d_R1__osg_Quat_R1__osg_Vec3d_R1__osg_Quat_R1,
	          "decompose the matrix into translation, rotation, scale and scale orietation. ",
	          "");
	I_Method6(void, makeOrtho, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top, IN, double, zNear, IN, double, zFar,
	          Properties::NON_VIRTUAL,
	          __void__makeOrtho__double__double__double__double__double__double,
	          "Set to an orthographic projection. ",
	          "See glOrtho for further details. ");
	I_Method6(bool, getOrtho, IN, double &, left, IN, double &, right, IN, double &, bottom, IN, double &, top, IN, double &, zNear, IN, double &, zFar,
	          Properties::NON_VIRTUAL,
	          __bool__getOrtho__double_R1__double_R1__double_R1__double_R1__double_R1__double_R1,
	          "Get the othogrraphic settings of the orthographic projection matrix. ",
	          "Note, if matrix is not an orthographic matrix then invalid values will be returned. ");
	I_Method4(void, makeOrtho2D, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top,
	          Properties::NON_VIRTUAL,
	          __void__makeOrtho2D__double__double__double__double,
	          "Set to a 2D orthographic projection. ",
	          "See glOrtho2D for further details. ");
	I_Method6(void, makeFrustum, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top, IN, double, zNear, IN, double, zFar,
	          Properties::NON_VIRTUAL,
	          __void__makeFrustum__double__double__double__double__double__double,
	          "Set to a perspective projection. ",
	          "See glFrustum for further details. ");
	I_Method6(bool, getFrustum, IN, double &, left, IN, double &, right, IN, double &, bottom, IN, double &, top, IN, double &, zNear, IN, double &, zFar,
	          Properties::NON_VIRTUAL,
	          __bool__getFrustum__double_R1__double_R1__double_R1__double_R1__double_R1__double_R1,
	          "Get the frustum settings of a perspective projection matrix. ",
	          "Note, if matrix is not a perspective matrix then invalid values will be returned. ");
	I_Method4(void, makePerspective, IN, double, fovy, IN, double, aspectRatio, IN, double, zNear, IN, double, zFar,
	          Properties::NON_VIRTUAL,
	          __void__makePerspective__double__double__double__double,
	          "Set to a symmetrical perspective projection. ",
	          "See gluPerspective for further details. Aspect ratio is defined as width/height. ");
	I_Method4(bool, getPerspective, IN, double &, fovy, IN, double &, aspectRatio, IN, double &, zNear, IN, double &, zFar,
	          Properties::NON_VIRTUAL,
	          __bool__getPerspective__double_R1__double_R1__double_R1__double_R1,
	          "Get the frustum settings of a symmetric perspective projection matrix. ",
	          "Return false if matrix is not a perspective matrix, where parameter values are undefined. Note, if matrix is not a symmetric perspective matrix then the shear will be lost. Asymmetric matrices occur when stereo, power walls, caves and reality center display are used. In these configuration one should use the AsFrustum method instead. ");
	I_Method3(void, makeLookAt, IN, const osg::Vec3d &, eye, IN, const osg::Vec3d &, center, IN, const osg::Vec3d &, up,
	          Properties::NON_VIRTUAL,
	          __void__makeLookAt__C5_Vec3d_R1__C5_Vec3d_R1__C5_Vec3d_R1,
	          "Set the position and orientation to be a view matrix, using the same convention as gluLookAt. ",
	          "");
	I_MethodWithDefaults4(void, getLookAt, IN, osg::Vec3f &, eye, , IN, osg::Vec3f &, center, , IN, osg::Vec3f &, up, , IN, osg::Matrixf::value_type, lookDistance, 1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__getLookAt__Vec3f_R1__Vec3f_R1__Vec3f_R1__value_type,
	                      "Get to the position and orientation of a modelview matrix, using the same convention as gluLookAt. ",
	                      "");
	I_MethodWithDefaults4(void, getLookAt, IN, osg::Vec3d &, eye, , IN, osg::Vec3d &, center, , IN, osg::Vec3d &, up, , IN, osg::Matrixf::value_type, lookDistance, 1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__getLookAt__Vec3d_R1__Vec3d_R1__Vec3d_R1__value_type,
	                      "Get to the position and orientation of a modelview matrix, using the same convention as gluLookAt. ",
	                      "");
	I_Method1(bool, invert, IN, const osg::Matrixf &, rhs,
	          Properties::NON_VIRTUAL,
	          __bool__invert__C5_Matrixf_R1,
	          "invert the matrix rhs, automatically select invert_4x3 or invert_4x4. ",
	          "");
	I_Method1(bool, invert_4x3, IN, const osg::Matrixf &, rhs,
	          Properties::NON_VIRTUAL,
	          __bool__invert_4x3__C5_Matrixf_R1,
	          "4x3 matrix invert, not right hand column is assumed to be 0,0,0,1. ",
	          "");
	I_Method1(bool, invert_4x4, IN, const osg::Matrixf &, rhs,
	          Properties::NON_VIRTUAL,
	          __bool__invert_4x4__C5_Matrixf_R1,
	          "full 4x4 matrix invert. ",
	          "");
	I_Method1(void, orthoNormalize, IN, const osg::Matrixf &, rhs,
	          Properties::NON_VIRTUAL,
	          __void__orthoNormalize__C5_Matrixf_R1,
	          "ortho-normalize the 3x3 rotation & scale matrix ",
	          "");
	I_Method1(osg::Vec3f, preMult, IN, const osg::Vec3f &, v,
	          Properties::NON_VIRTUAL,
	          __Vec3f__preMult__C5_Vec3f_R1,
	          "",
	          "");
	I_Method1(osg::Vec3d, preMult, IN, const osg::Vec3d &, v,
	          Properties::NON_VIRTUAL,
	          __Vec3d__preMult__C5_Vec3d_R1,
	          "",
	          "");
	I_Method1(osg::Vec3f, postMult, IN, const osg::Vec3f &, v,
	          Properties::NON_VIRTUAL,
	          __Vec3f__postMult__C5_Vec3f_R1,
	          "",
	          "");
	I_Method1(osg::Vec3d, postMult, IN, const osg::Vec3d &, v,
	          Properties::NON_VIRTUAL,
	          __Vec3d__postMult__C5_Vec3d_R1,
	          "",
	          "");
	I_Method1(osg::Vec4f, preMult, IN, const osg::Vec4f &, v,
	          Properties::NON_VIRTUAL,
	          __Vec4f__preMult__C5_Vec4f_R1,
	          "",
	          "");
	I_Method1(osg::Vec4d, preMult, IN, const osg::Vec4d &, v,
	          Properties::NON_VIRTUAL,
	          __Vec4d__preMult__C5_Vec4d_R1,
	          "",
	          "");
	I_Method1(osg::Vec4f, postMult, IN, const osg::Vec4f &, v,
	          Properties::NON_VIRTUAL,
	          __Vec4f__postMult__C5_Vec4f_R1,
	          "",
	          "");
	I_Method1(osg::Vec4d, postMult, IN, const osg::Vec4d &, v,
	          Properties::NON_VIRTUAL,
	          __Vec4d__postMult__C5_Vec4d_R1,
	          "",
	          "");
	I_Method1(void, set, IN, const osg::Quat &, q,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Quat_R1,
	          "",
	          "");
	I_Method1(void, get, IN, osg::Quat &, q,
	          Properties::NON_VIRTUAL,
	          __void__get__Quat_R1,
	          "",
	          "");
	I_Method1(void, setRotate, IN, const osg::Quat &, q,
	          Properties::NON_VIRTUAL,
	          __void__setRotate__C5_Quat_R1,
	          "",
	          "");
	I_Method0(osg::Quat, getRotate,
	          Properties::NON_VIRTUAL,
	          __Quat__getRotate,
	          "",
	          "");
	I_Method3(void, setTrans, IN, osg::Matrixf::value_type, tx, IN, osg::Matrixf::value_type, ty, IN, osg::Matrixf::value_type, tz,
	          Properties::NON_VIRTUAL,
	          __void__setTrans__value_type__value_type__value_type,
	          "",
	          "");
	I_Method1(void, setTrans, IN, const osg::Vec3f &, v,
	          Properties::NON_VIRTUAL,
	          __void__setTrans__C5_Vec3f_R1,
	          "",
	          "");
	I_Method1(void, setTrans, IN, const osg::Vec3d &, v,
	          Properties::NON_VIRTUAL,
	          __void__setTrans__C5_Vec3d_R1,
	          "",
	          "");
	I_Method0(osg::Vec3d, getTrans,
	          Properties::NON_VIRTUAL,
	          __Vec3d__getTrans,
	          "",
	          "");
	I_Method0(osg::Vec3d, getScale,
	          Properties::NON_VIRTUAL,
	          __Vec3d__getScale,
	          "",
	          "");
	I_Method2(void, mult, IN, const osg::Matrixf &, x, IN, const osg::Matrixf &, x,
	          Properties::NON_VIRTUAL,
	          __void__mult__C5_Matrixf_R1__C5_Matrixf_R1,
	          "",
	          "");
	I_Method1(void, preMult, IN, const osg::Matrixf &, x,
	          Properties::NON_VIRTUAL,
	          __void__preMult__C5_Matrixf_R1,
	          "",
	          "");
	I_Method1(void, postMult, IN, const osg::Matrixf &, x,
	          Properties::NON_VIRTUAL,
	          __void__postMult__C5_Matrixf_R1,
	          "",
	          "");
	I_StaticMethod0(osg::Matrixf, identity,
	                __Matrixf__identity_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, scale, IN, const osg::Vec3f &, sv,
	                __Matrixf__scale__C5_Vec3f_R1_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, scale, IN, const osg::Vec3d &, sv,
	                __Matrixf__scale__C5_Vec3d_R1_S,
	                "",
	                "");
	I_StaticMethod3(osg::Matrixf, scale, IN, osg::Matrixf::value_type, sx, IN, osg::Matrixf::value_type, sy, IN, osg::Matrixf::value_type, sz,
	                __Matrixf__scale__value_type__value_type__value_type_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, translate, IN, const osg::Vec3f &, dv,
	                __Matrixf__translate__C5_Vec3f_R1_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, translate, IN, const osg::Vec3d &, dv,
	                __Matrixf__translate__C5_Vec3d_R1_S,
	                "",
	                "");
	I_StaticMethod3(osg::Matrixf, translate, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, y, IN, osg::Matrixf::value_type, z,
	                __Matrixf__translate__value_type__value_type__value_type_S,
	                "",
	                "");
	I_StaticMethod2(osg::Matrixf, rotate, IN, const osg::Vec3f &, from, IN, const osg::Vec3f &, to,
	                __Matrixf__rotate__C5_Vec3f_R1__C5_Vec3f_R1_S,
	                "",
	                "");
	I_StaticMethod2(osg::Matrixf, rotate, IN, const osg::Vec3d &, from, IN, const osg::Vec3d &, to,
	                __Matrixf__rotate__C5_Vec3d_R1__C5_Vec3d_R1_S,
	                "",
	                "");
	I_StaticMethod4(osg::Matrixf, rotate, IN, osg::Matrixf::value_type, angle, IN, osg::Matrixf::value_type, x, IN, osg::Matrixf::value_type, y, IN, osg::Matrixf::value_type, z,
	                __Matrixf__rotate__value_type__value_type__value_type__value_type_S,
	                "",
	                "");
	I_StaticMethod2(osg::Matrixf, rotate, IN, osg::Matrixf::value_type, angle, IN, const osg::Vec3f &, axis,
	                __Matrixf__rotate__value_type__C5_Vec3f_R1_S,
	                "",
	                "");
	I_StaticMethod2(osg::Matrixf, rotate, IN, osg::Matrixf::value_type, angle, IN, const osg::Vec3d &, axis,
	                __Matrixf__rotate__value_type__C5_Vec3d_R1_S,
	                "",
	                "");
	I_StaticMethod6(osg::Matrixf, rotate, IN, osg::Matrixf::value_type, angle1, IN, const osg::Vec3f &, axis1, IN, osg::Matrixf::value_type, angle2, IN, const osg::Vec3f &, axis2, IN, osg::Matrixf::value_type, angle3, IN, const osg::Vec3f &, axis3,
	                __Matrixf__rotate__value_type__C5_Vec3f_R1__value_type__C5_Vec3f_R1__value_type__C5_Vec3f_R1_S,
	                "",
	                "");
	I_StaticMethod6(osg::Matrixf, rotate, IN, osg::Matrixf::value_type, angle1, IN, const osg::Vec3d &, axis1, IN, osg::Matrixf::value_type, angle2, IN, const osg::Vec3d &, axis2, IN, osg::Matrixf::value_type, angle3, IN, const osg::Vec3d &, axis3,
	                __Matrixf__rotate__value_type__C5_Vec3d_R1__value_type__C5_Vec3d_R1__value_type__C5_Vec3d_R1_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, rotate, IN, const osg::Quat &, quat,
	                __Matrixf__rotate__C5_Quat_R1_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, inverse, IN, const osg::Matrixf &, matrix,
	                __Matrixf__inverse__C5_Matrixf_R1_S,
	                "",
	                "");
	I_StaticMethod1(osg::Matrixf, orthoNormal, IN, const osg::Matrixf &, matrix,
	                __Matrixf__orthoNormal__C5_Matrixf_R1_S,
	                "",
	                "");
	I_StaticMethod6(osg::Matrixf, ortho, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top, IN, double, zNear, IN, double, zFar,
	                __Matrixf__ortho__double__double__double__double__double__double_S,
	                "Create an orthographic projection matrix. ",
	                "See glOrtho for further details. ");
	I_StaticMethod4(osg::Matrixf, ortho2D, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top,
	                __Matrixf__ortho2D__double__double__double__double_S,
	                "Create a 2D orthographic projection. ",
	                "See glOrtho for further details. ");
	I_StaticMethod6(osg::Matrixf, frustum, IN, double, left, IN, double, right, IN, double, bottom, IN, double, top, IN, double, zNear, IN, double, zFar,
	                __Matrixf__frustum__double__double__double__double__double__double_S,
	                "Create a perspective projection. ",
	                "See glFrustum for further details. ");
	I_StaticMethod4(osg::Matrixf, perspective, IN, double, fovy, IN, double, aspectRatio, IN, double, zNear, IN, double, zFar,
	                __Matrixf__perspective__double__double__double__double_S,
	                "Create a symmetrical perspective projection. ",
	                "See gluPerspective for further details. Aspect ratio is defined as width/height. ");
	I_StaticMethod3(osg::Matrixf, lookAt, IN, const osg::Vec3f &, eye, IN, const osg::Vec3f &, center, IN, const osg::Vec3f &, up,
	                __Matrixf__lookAt__C5_Vec3f_R1__C5_Vec3f_R1__C5_Vec3f_R1_S,
	                "Create the position and orientation as per a camera, using the same convention as gluLookAt. ",
	                "");
	I_StaticMethod3(osg::Matrixf, lookAt, IN, const osg::Vec3d &, eye, IN, const osg::Vec3d &, center, IN, const osg::Vec3d &, up,
	                __Matrixf__lookAt__C5_Vec3d_R1__C5_Vec3d_R1__C5_Vec3d_R1_S,
	                "Create the position and orientation as per a camera, using the same convention as gluLookAt. ",
	                "");
	I_StaticMethod2(osg::Vec3f, transform3x3, IN, const osg::Vec3f &, v, IN, const osg::Matrixf &, m,
	                __Vec3f__transform3x3__C5_Vec3f_R1__C5_Matrixf_R1_S,
	                "apply a 3x3 transform of v*M[0. ",
	                ".2,0..2]. ");
	I_StaticMethod2(osg::Vec3d, transform3x3, IN, const osg::Vec3d &, v, IN, const osg::Matrixf &, m,
	                __Vec3d__transform3x3__C5_Vec3d_R1__C5_Matrixf_R1_S,
	                "apply a 3x3 transform of v*M[0. ",
	                ".2,0..2]. ");
	I_StaticMethod2(osg::Vec3f, transform3x3, IN, const osg::Matrixf &, m, IN, const osg::Vec3f &, v,
	                __Vec3f__transform3x3__C5_Matrixf_R1__C5_Vec3f_R1_S,
	                "apply a 3x3 transform of M[0. ",
	                ".2,0..2]*v. ");
	I_StaticMethod2(osg::Vec3d, transform3x3, IN, const osg::Matrixf &, m, IN, const osg::Vec3d &, v,
	                __Vec3d__transform3x3__C5_Matrixf_R1__C5_Vec3d_R1_S,
	                "apply a 3x3 transform of M[0. ",
	                ".2,0..2]*v. ");
	I_SimpleProperty(osg::Quat, Rotate, 
	                 __Quat__getRotate, 
	                 __void__setRotate__C5_Quat_R1);
	I_SimpleProperty(osg::Vec3d, Scale, 
	                 __Vec3d__getScale, 
	                 0);
	I_SimpleProperty(osg::Vec3d, Trans, 
	                 __Vec3d__getTrans, 
	                 __void__setTrans__C5_Vec3d_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::RefMatrixf)
	I_DeclaringFile("osg/Matrixf");
	I_BaseType(osg::Object);
	I_BaseType(osg::Matrixf);
	I_Constructor0(____RefMatrixf,
	               "",
	               "");
	I_Constructor1(IN, const osg::Matrixf &, other,
	               Properties::NON_EXPLICIT,
	               ____RefMatrixf__C5_Matrixf_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::Matrixd &, other,
	               Properties::NON_EXPLICIT,
	               ____RefMatrixf__C5_Matrixd_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::RefMatrixf &, other,
	               Properties::NON_EXPLICIT,
	               ____RefMatrixf__C5_RefMatrixf_R1,
	               "",
	               "");
	I_Constructor1(IN, osg::Matrixf::value_type const *const, def,
	               Properties::EXPLICIT,
	               ____RefMatrixf__Matrixf_value_type_C5_P1C5,
	               "",
	               "");
	I_Constructor16(IN, osg::Matrixf::value_type, a00, IN, osg::Matrixf::value_type, a01, IN, osg::Matrixf::value_type, a02, IN, osg::Matrixf::value_type, a03, IN, osg::Matrixf::value_type, a10, IN, osg::Matrixf::value_type, a11, IN, osg::Matrixf::value_type, a12, IN, osg::Matrixf::value_type, a13, IN, osg::Matrixf::value_type, a20, IN, osg::Matrixf::value_type, a21, IN, osg::Matrixf::value_type, a22, IN, osg::Matrixf::value_type, a23, IN, osg::Matrixf::value_type, a30, IN, osg::Matrixf::value_type, a31, IN, osg::Matrixf::value_type, a32, IN, osg::Matrixf::value_type, a33,
	                ____RefMatrixf__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type__Matrixf_value_type,
	                "",
	                "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __Object_P1__clone__C5_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
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
END_REFLECTOR

