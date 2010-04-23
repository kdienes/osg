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

#include <osg/ApplicationUsage>
#include <osg/Matrixd>
#include <osg/Node>
#include <osg/Vec3>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgGA/UFOManipulator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgGA::UFOManipulator)
	I_DeclaringFile("osgGA/UFOManipulator");
	I_BaseType(osgGA::MatrixManipulator);
	I_Constructor0(____UFOManipulator,
	               "Default constructor. ",
	               "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return className ",
	          "returns constant \"UFO\"  ");
	I_Method1(void, setByMatrix, IN, const osg::Matrixd &, matrix,
	          Properties::VIRTUAL,
	          __void__setByMatrix__C5_osg_Matrixd_R1,
	          "Set the current position with a matrix. ",
	          " param matrix A viewpoint matrix.  ");
	I_Method1(void, setByInverseMatrix, IN, const osg::Matrixd &, invmat,
	          Properties::VIRTUAL,
	          __void__setByInverseMatrix__C5_osg_Matrixd_R1,
	          "Set the current position with the inverse matrix. ",
	          " param invmat The inverse of a viewpoint matrix  ");
	I_Method0(osg::Matrixd, getMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrixd__getMatrix,
	          "Get the current viewmatrix. ",
	          "");
	I_Method0(osg::Matrixd, getInverseMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrixd__getInverseMatrix,
	          "Get the current inverse view matrix. ",
	          "");
	I_Method1(void, setNode, IN, osg::Node *, node,
	          Properties::VIRTUAL,
	          __void__setNode__osg_Node_P1,
	          "Set the subgraph this manipulator is driving the eye through. ",
	          " param node root of subgraph  ");
	I_Method0(const osg::Node *, getNode,
	          Properties::VIRTUAL,
	          __C5_osg_Node_P1__getNode,
	          "Get the root node of the subgraph this manipulator is driving the eye through (const). ",
	          "");
	I_Method0(osg::Node *, getNode,
	          Properties::VIRTUAL,
	          __osg_Node_P1__getNode,
	          "Get the root node of the subgraph this manipulator is driving the eye through. ",
	          "");
	I_Method0(void, computeHomePosition,
	          Properties::VIRTUAL,
	          __void__computeHomePosition,
	          "Computes the home position based on the extents and scale of the scene graph rooted at node. ",
	          "");
	I_Method2(void, home, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __void__home__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "Sets the viewpoint matrix to the home position. ",
	          "");
	I_Method1(void, home, IN, double, x,
	          Properties::VIRTUAL,
	          __void__home__double,
	          "Move the camera to the default position. ",
	          "This version does not require GUIEventAdapter and GUIActionAdapter so may be called from somewhere other than a handle() method in GUIEventHandler. Application must be aware of implications. ");
	I_Method2(void, init, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __void__init__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Start/restart the manipulator. ",
	          "FIXME: what does this actually mean? Provide examples. ");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, aa,
	          Properties::VIRTUAL,
	          __bool__handle__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "Handles incoming osgGA events. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Reports Usage parameters to the application. ",
	          "");
	I_Method3(void, getCurrentPositionAsLookAt, IN, osg::Vec3 &, eye, IN, osg::Vec3 &, center, IN, osg::Vec3 &, up,
	          Properties::NON_VIRTUAL,
	          __void__getCurrentPositionAsLookAt__osg_Vec3_R1__osg_Vec3_R1__osg_Vec3_R1,
	          "Report the current position as LookAt vectors. ",
	          "");
	I_Method1(void, setMinHeight, IN, double, in_min_height,
	          Properties::NON_VIRTUAL,
	          __void__setMinHeight__double,
	          "",
	          "");
	I_Method0(double, getMinHeight,
	          Properties::NON_VIRTUAL,
	          __double__getMinHeight,
	          "",
	          "");
	I_Method1(void, setMinDistance, IN, double, in_min_dist,
	          Properties::NON_VIRTUAL,
	          __void__setMinDistance__double,
	          "",
	          "");
	I_Method0(double, getMinDistance,
	          Properties::NON_VIRTUAL,
	          __double__getMinDistance,
	          "",
	          "");
	I_Method1(void, setForwardSpeed, IN, double, in_fs,
	          Properties::NON_VIRTUAL,
	          __void__setForwardSpeed__double,
	          "",
	          "");
	I_Method0(double, getForwardSpeed,
	          Properties::NON_VIRTUAL,
	          __double__getForwardSpeed,
	          "",
	          "");
	I_Method1(void, setSideSpeed, IN, double, in_ss,
	          Properties::NON_VIRTUAL,
	          __void__setSideSpeed__double,
	          "",
	          "");
	I_Method0(double, getSideSpeed,
	          Properties::NON_VIRTUAL,
	          __double__getSideSpeed,
	          "",
	          "");
	I_Method1(void, setRotationSpeed, IN, double, in_rot_speed,
	          Properties::NON_VIRTUAL,
	          __void__setRotationSpeed__double,
	          "",
	          "");
	I_Method0(double, getRotationSpeed,
	          Properties::NON_VIRTUAL,
	          __double__getRotationSpeed,
	          "",
	          "");
	I_ProtectedMethod3(bool, intersect, IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end, IN, osg::Vec3d &, intersection,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __bool__intersect__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1__osg_Vec3d_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, _stop,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___stop,
	                   "",
	                   "");
	I_ProtectedMethod2(void, _keyDown, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, x,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___keyDown__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, _keyUp, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, x,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___keyUp__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, _frame, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, x,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___frame__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, _adjustPosition,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void___adjustPosition,
	                   "",
	                   "");
	I_SimpleProperty(const osg::Matrixd &, ByInverseMatrix, 
	                 0, 
	                 __void__setByInverseMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(const osg::Matrixd &, ByMatrix, 
	                 0, 
	                 __void__setByMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(double, ForwardSpeed, 
	                 __double__getForwardSpeed, 
	                 __void__setForwardSpeed__double);
	I_SimpleProperty(osg::Matrixd, InverseMatrix, 
	                 __osg_Matrixd__getInverseMatrix, 
	                 0);
	I_SimpleProperty(osg::Matrixd, Matrix, 
	                 __osg_Matrixd__getMatrix, 
	                 0);
	I_SimpleProperty(double, MinDistance, 
	                 __double__getMinDistance, 
	                 __void__setMinDistance__double);
	I_SimpleProperty(double, MinHeight, 
	                 __double__getMinHeight, 
	                 __void__setMinHeight__double);
	I_SimpleProperty(osg::Node *, Node, 
	                 __osg_Node_P1__getNode, 
	                 __void__setNode__osg_Node_P1);
	I_SimpleProperty(double, RotationSpeed, 
	                 __double__getRotationSpeed, 
	                 __void__setRotationSpeed__double);
	I_SimpleProperty(double, SideSpeed, 
	                 __double__getSideSpeed, 
	                 __void__setSideSpeed__double);
END_REFLECTOR

