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

#include <osg/Image>
#include <osg/Node>
#include <osg/Object>
#include <osg/Shape>
#include <osgDB/Archive>
#include <osgDB/ReaderWriter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< std::string >, osgDB::Archive::FileNameList)

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgDB::Archive)
	I_DeclaringFile("osgDB/Archive");
	I_BaseType(osgDB::ReaderWriter);
	I_Constructor0(____Archive,
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
	I_Method1(bool, acceptsExtension, IN, const std::string &, x,
	          Properties::VIRTUAL,
	          __bool__acceptsExtension__C5_std_string_R1,
	          "",
	          "");
	I_Method0(void, close,
	          Properties::PURE_VIRTUAL,
	          __void__close,
	          "close the archive. ",
	          "");
	I_Method1(bool, fileExists, IN, const std::string &, filename,
	          Properties::PURE_VIRTUAL,
	          __bool__fileExists__C5_std_string_R1,
	          "return true if file exists in archive. ",
	          "");
	I_Method0(std::string, getMasterFileName,
	          Properties::PURE_VIRTUAL,
	          __std_string__getMasterFileName,
	          "Get the file name which represents the master file recorded in the Archive. ",
	          "");
	I_Method1(bool, getFileNames, IN, osgDB::Archive::FileNameList &, fileNameList,
	          Properties::PURE_VIRTUAL,
	          __bool__getFileNames__FileNameList_R1,
	          "Get the full list of file names available in the archive. ",
	          "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readObject, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __ReadResult__readObject__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readImage, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __ReadResult__readImage__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readHeightField, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __ReadResult__readHeightField__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults2(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __ReadResult__readNode__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeObject, IN, const osg::Object &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __WriteResult__writeObject__C5_osg_Object_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeImage, IN, const osg::Image &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __WriteResult__writeImage__C5_osg_Image_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeHeightField, IN, const osg::HeightField &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __WriteResult__writeHeightField__C5_osg_HeightField_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, x, , IN, const std::string &, x, , IN, const osgDB::ReaderWriter::Options *, x, NULL,
	                      Properties::PURE_VIRTUAL,
	                      __WriteResult__writeNode__C5_osg_Node_R1__C5_std_string_R1__C5_Options_P1,
	                      "",
	                      "");
	I_SimpleProperty(std::string, MasterFileName, 
	                 __std_string__getMasterFileName, 
	                 0);
END_REFLECTOR

