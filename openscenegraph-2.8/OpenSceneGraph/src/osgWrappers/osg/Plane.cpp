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

#include <osg/BoundingBox>
#include <osg/BoundingSphere>
#include <osg/Matrix>
#include <osg/Plane>
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

#include <osg/io_utils>
	
TYPE_NAME_ALIAS(double, osg::Plane::value_type)

TYPE_NAME_ALIAS(osg::Vec3d, osg::Plane::Vec3_type)

TYPE_NAME_ALIAS(osg::Vec4d, osg::Plane::Vec4_type)

BEGIN_VALUE_REFLECTOR(osg::Plane)
	I_ReaderWriter(osgIntrospection::StdReaderWriter<reflected_type>);	// user-defined
	I_Comparator(osgIntrospection::PartialOrderComparator<reflected_type>);	// user-defined
	I_DeclaringFile("osg/Plane");
	I_Constructor0(____Plane,
	               "",
	               "");
	I_Constructor1(IN, const osg::Plane &, pl,
	               Properties::NON_EXPLICIT,
	               ____Plane__C5_Plane_R1,
	               "",
	               "");
	I_Constructor4(IN, osg::Plane::value_type, a, IN, osg::Plane::value_type, b, IN, osg::Plane::value_type, c, IN, osg::Plane::value_type, d,
	               ____Plane__value_type__value_type__value_type__value_type,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec4f &, vec,
	               Properties::NON_EXPLICIT,
	               ____Plane__C5_Vec4f_R1,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec4d &, vec,
	               Properties::NON_EXPLICIT,
	               ____Plane__C5_Vec4d_R1,
	               "",
	               "");
	I_Constructor2(IN, const osg::Plane::Vec3_type &, norm, IN, osg::Plane::value_type, d,
	               ____Plane__C5_Vec3_type_R1__value_type,
	               "",
	               "");
	I_Constructor3(IN, const osg::Plane::Vec3_type &, v1, IN, const osg::Plane::Vec3_type &, v2, IN, const osg::Plane::Vec3_type &, v3,
	               ____Plane__C5_Vec3_type_R1__C5_Vec3_type_R1__C5_Vec3_type_R1,
	               "",
	               "");
	I_Constructor2(IN, const osg::Plane::Vec3_type &, norm, IN, const osg::Plane::Vec3_type &, point,
	               ____Plane__C5_Vec3_type_R1__C5_Vec3_type_R1,
	               "",
	               "");
	I_Method1(void, set, IN, const osg::Plane &, pl,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Plane_R1,
	          "",
	          "");
	I_Method4(void, set, IN, osg::Plane::value_type, a, IN, osg::Plane::value_type, b, IN, osg::Plane::value_type, c, IN, osg::Plane::value_type, d,
	          Properties::NON_VIRTUAL,
	          __void__set__value_type__value_type__value_type__value_type,
	          "",
	          "");
	I_Method1(void, set, IN, const osg::Vec4f &, vec,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Vec4f_R1,
	          "",
	          "");
	I_Method1(void, set, IN, const osg::Vec4d &, vec,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Vec4d_R1,
	          "",
	          "");
	I_Method2(void, set, IN, const osg::Plane::Vec3_type &, norm, IN, double, d,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Vec3_type_R1__double,
	          "",
	          "");
	I_Method3(void, set, IN, const osg::Plane::Vec3_type &, v1, IN, const osg::Plane::Vec3_type &, v2, IN, const osg::Plane::Vec3_type &, v3,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Vec3_type_R1__C5_Vec3_type_R1__C5_Vec3_type_R1,
	          "",
	          "");
	I_Method2(void, set, IN, const osg::Plane::Vec3_type &, norm, IN, const osg::Plane::Vec3_type &, point,
	          Properties::NON_VIRTUAL,
	          __void__set__C5_Vec3_type_R1__C5_Vec3_type_R1,
	          "",
	          "");
	I_Method0(void, flip,
	          Properties::NON_VIRTUAL,
	          __void__flip,
	          "flip/reverse the orientation of the plane. ",
	          "");
	I_Method0(void, makeUnitLength,
	          Properties::NON_VIRTUAL,
	          __void__makeUnitLength,
	          "",
	          "");
	I_Method0(void, calculateUpperLowerBBCorners,
	          Properties::NON_VIRTUAL,
	          __void__calculateUpperLowerBBCorners,
	          "calculate the upper and lower bounding box corners to be used in the intersect(BoundingBox&) method for speeding calculations. ",
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
	I_Method0(osg::Plane::value_type *, ptr,
	          Properties::NON_VIRTUAL,
	          __value_type_P1__ptr,
	          "",
	          "");
	I_Method0(const osg::Plane::value_type *, ptr,
	          Properties::NON_VIRTUAL,
	          __C5_value_type_P1__ptr,
	          "",
	          "");
	I_Method0(osg::Plane::Vec4_type, asVec4,
	          Properties::NON_VIRTUAL,
	          __Vec4_type__asVec4,
	          "",
	          "");
	I_Method0(osg::Plane::Vec3_type, getNormal,
	          Properties::NON_VIRTUAL,
	          __Vec3_type__getNormal,
	          "",
	          "");
	I_Method1(float, distance, IN, const osg::Vec3f &, v,
	          Properties::NON_VIRTUAL,
	          __float__distance__C5_osg_Vec3f_R1,
	          "calculate the distance between a point and the plane. ",
	          "");
	I_Method1(double, distance, IN, const osg::Vec3d &, v,
	          Properties::NON_VIRTUAL,
	          __double__distance__C5_osg_Vec3d_R1,
	          "",
	          "");
	I_Method1(float, dotProductNormal, IN, const osg::Vec3f &, v,
	          Properties::NON_VIRTUAL,
	          __float__dotProductNormal__C5_osg_Vec3f_R1,
	          "calculate the dot product of the plane normal and a point. ",
	          "");
	I_Method1(double, dotProductNormal, IN, const osg::Vec3d &, v,
	          Properties::NON_VIRTUAL,
	          __double__dotProductNormal__C5_osg_Vec3d_R1,
	          "calculate the dot product of the plane normal and a point. ",
	          "");
	I_Method1(int, intersect, IN, const std::vector< osg::Vec3f > &, vertices,
	          Properties::NON_VIRTUAL,
	          __int__intersect__C5_std_vectorT1_Vec3f__R1,
	          "intersection test between plane and vertex list return 1 if the bs is completely above plane, return 0 if the bs intersects the plane, return -1 if the bs is completely below the plane. ",
	          "");
	I_Method1(int, intersect, IN, const std::vector< osg::Vec3d > &, vertices,
	          Properties::NON_VIRTUAL,
	          __int__intersect__C5_std_vectorT1_Vec3d__R1,
	          "intersection test between plane and vertex list return 1 if the bs is completely above plane, return 0 if the bs intersects the plane, return -1 if the bs is completely below the plane. ",
	          "");
	I_Method1(int, intersect, IN, const osg::BoundingSphere &, bs,
	          Properties::NON_VIRTUAL,
	          __int__intersect__C5_BoundingSphere_R1,
	          "intersection test between plane and bounding sphere. ",
	          "return 1 if the bs is completely above plane, return 0 if the bs intersects the plane, return -1 if the bs is completely below the plane. ");
	I_Method1(int, intersect, IN, const osg::BoundingBox &, bb,
	          Properties::NON_VIRTUAL,
	          __int__intersect__C5_BoundingBox_R1,
	          "intersection test between plane and bounding sphere. ",
	          "return 1 if the bs is completely above plane, return 0 if the bs intersects the plane, return -1 if the bs is completely below the plane. ");
	I_Method1(void, transform, IN, const osg::Matrix &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__transform__C5_osg_Matrix_R1,
	          "Transform the plane by matrix. ",
	          "Note, this operation carries out the calculation of the inverse of the matrix since a plane must be multiplied by the inverse transposed to transform it. This make this operation expensive. If the inverse has been already calculated elsewhere then use transformProvidingInverse() instead. See http://www.worldserver.com/turk/computergraphics/NormalTransformations.pdf ");
	I_Method1(void, transformProvidingInverse, IN, const osg::Matrix &, matrix,
	          Properties::NON_VIRTUAL,
	          __void__transformProvidingInverse__C5_osg_Matrix_R1,
	          "Transform the plane by providing a pre inverted matrix. ",
	          "see transform for details. ");
	I_SimpleProperty(osg::Plane::Vec3_type, Normal, 
	                 __Vec3_type__getNormal, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::Vec3d >)

STD_VECTOR_REFLECTOR(std::vector< osg::Vec3f >)

