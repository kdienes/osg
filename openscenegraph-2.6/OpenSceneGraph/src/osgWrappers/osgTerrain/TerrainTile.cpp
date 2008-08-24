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
#include <osgTerrain/Layer>
#include <osgTerrain/Locator>
#include <osgTerrain/Terrain>
#include <osgTerrain/TerrainTechnique>
#include <osgTerrain/TerrainTile>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgTerrain::TerrainTile)
	I_DeclaringFile("osgTerrain/TerrainTile");
	I_BaseType(osg::Group);
	I_Constructor0(____TerrainTile,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgTerrain::TerrainTile &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TerrainTile__C5_TerrainTile_R1__C5_osg_CopyOp_R1,
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
	I_Method0(void, init,
	          Properties::NON_VIRTUAL,
	          __void__init,
	          "Call init on any attached TerrainTechnique. ",
	          "");
	I_Method1(void, setTerrain, IN, osgTerrain::Terrain *, ts,
	          Properties::NON_VIRTUAL,
	          __void__setTerrain__Terrain_P1,
	          "Set the Terrain that this Terrain tile is a member of. ",
	          "");
	I_Method0(osgTerrain::Terrain *, getTerrain,
	          Properties::NON_VIRTUAL,
	          __Terrain_P1__getTerrain,
	          "Get the Terrain that this Terrain tile is a member of. ",
	          "");
	I_Method0(const osgTerrain::Terrain *, getTerrain,
	          Properties::NON_VIRTUAL,
	          __C5_Terrain_P1__getTerrain,
	          "Get the const Terrain that this Terrain tile is a member of. ",
	          "");
	I_Method1(void, setTileID, IN, const osgTerrain::TileID &, tileID,
	          Properties::NON_VIRTUAL,
	          __void__setTileID__C5_TileID_R1,
	          "Set the TileID (layer, x,y) of the TerrainTile. ",
	          "The TileID is used so it can be located by its neighbours via the enclosing Terrain node that manages a map of TileID to TerraiTiles. ");
	I_Method0(const osgTerrain::TileID &, getTileID,
	          Properties::NON_VIRTUAL,
	          __C5_TileID_R1__getTileID,
	          "Get the TileID (layer, x,y) of the TerrainTile. ",
	          "");
	I_Method1(void, setTerrainTechnique, IN, osgTerrain::TerrainTechnique *, TerrainTechnique,
	          Properties::NON_VIRTUAL,
	          __void__setTerrainTechnique__TerrainTechnique_P1,
	          "Set the TerrainTechnique. ",
	          "");
	I_Method0(osgTerrain::TerrainTechnique *, getTerrainTechnique,
	          Properties::NON_VIRTUAL,
	          __TerrainTechnique_P1__getTerrainTechnique,
	          "Get the TerrainTechnique. ",
	          "");
	I_Method0(const osgTerrain::TerrainTechnique *, getTerrainTechnique,
	          Properties::NON_VIRTUAL,
	          __C5_TerrainTechnique_P1__getTerrainTechnique,
	          "Get the const TerrainTechnique. ",
	          "");
	I_Method1(void, setLocator, IN, osgTerrain::Locator *, locator,
	          Properties::NON_VIRTUAL,
	          __void__setLocator__Locator_P1,
	          "Set the coordinate frame locator of the terrain node. ",
	          "The locator takes non-dimensional s,t coordinates into the X,Y,Z world coords and back. ");
	I_Method0(osgTerrain::Locator *, getLocator,
	          Properties::NON_VIRTUAL,
	          __Locator_P1__getLocator,
	          "Get the coordinate frame locator of the terrain node. ",
	          "");
	I_Method0(const osgTerrain::Locator *, getLocator,
	          Properties::NON_VIRTUAL,
	          __C5_Locator_P1__getLocator,
	          "Get the coordinate frame locator of the terrain node. ",
	          "");
	I_Method1(void, setElevationLayer, IN, osgTerrain::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__setElevationLayer__Layer_P1,
	          "Set the layer to use to define the elevations of the terrain. ",
	          "");
	I_Method0(osgTerrain::Layer *, getElevationLayer,
	          Properties::NON_VIRTUAL,
	          __Layer_P1__getElevationLayer,
	          "Get the layer to use to define the elevations of the terrain. ",
	          "");
	I_Method0(const osgTerrain::Layer *, getElevationLayer,
	          Properties::NON_VIRTUAL,
	          __C5_Layer_P1__getElevationLayer,
	          "Get the const layer to use to define the elevations of the terrain. ",
	          "");
	I_Method2(void, setColorLayer, IN, unsigned int, i, IN, osgTerrain::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__setColorLayer__unsigned_int__Layer_P1,
	          "Set a color layer with specified layer number. ",
	          "");
	I_Method1(osgTerrain::Layer *, getColorLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Layer_P1__getColorLayer__unsigned_int,
	          "Get color layer with specified layer number. ",
	          "");
	I_Method1(const osgTerrain::Layer *, getColorLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Layer_P1__getColorLayer__unsigned_int,
	          "Set const color layer with specified layer number. ",
	          "");
	I_Method0(unsigned int, getNumColorLayers,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumColorLayers,
	          "Get the number of colour layers. ",
	          "");
	I_Method1(void, setRequiresNormals, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setRequiresNormals__bool,
	          "Set hint to whether the TerrainTechnique should create per vertex normals for lighting purposes. ",
	          "");
	I_Method0(bool, getRequiresNormals,
	          Properties::NON_VIRTUAL,
	          __bool__getRequiresNormals,
	          "Get whether the TerrainTechnique should create per vertex normals for lighting purposes. ",
	          "");
	I_Method1(void, setTreatBoundariesToValidDataAsDefaultValue, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setTreatBoundariesToValidDataAsDefaultValue__bool,
	          "Set the hint to whether the TerrainTechnique should treat the invalid Layer entries that at are neigbours to valid entries with the default value. ",
	          "");
	I_Method0(bool, getTreatBoundariesToValidDataAsDefaultValue,
	          Properties::NON_VIRTUAL,
	          __bool__getTreatBoundariesToValidDataAsDefaultValue,
	          "Get whether the TeatBoundariesToValidDataAsDefaultValue hint. ",
	          "");
	I_Method1(void, setDirty, IN, bool, dirty,
	          Properties::NON_VIRTUAL,
	          __void__setDirty__bool,
	          "Set the dirty flag on/off. ",
	          "");
	I_Method0(bool, getDirty,
	          Properties::NON_VIRTUAL,
	          __bool__getDirty,
	          "return true if the tile is dirty and needs to be updated, ",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __osg_BoundingSphere__computeBound,
	          "Compute the bounding volume of the terrain by computing the union of the bounding volumes of all layers. ",
	          "");
	I_ArrayProperty(osgTerrain::Layer *, ColorLayer, 
	                __Layer_P1__getColorLayer__unsigned_int, 
	                __void__setColorLayer__unsigned_int__Layer_P1, 
	                __unsigned_int__getNumColorLayers, 
	                0, 
	                0, 
	                0);
	I_SimpleProperty(bool, Dirty, 
	                 __bool__getDirty, 
	                 __void__setDirty__bool);
	I_SimpleProperty(osgTerrain::Layer *, ElevationLayer, 
	                 __Layer_P1__getElevationLayer, 
	                 __void__setElevationLayer__Layer_P1);
	I_SimpleProperty(osgTerrain::Locator *, Locator, 
	                 __Locator_P1__getLocator, 
	                 __void__setLocator__Locator_P1);
	I_SimpleProperty(bool, RequiresNormals, 
	                 __bool__getRequiresNormals, 
	                 __void__setRequiresNormals__bool);
	I_SimpleProperty(osgTerrain::Terrain *, Terrain, 
	                 __Terrain_P1__getTerrain, 
	                 __void__setTerrain__Terrain_P1);
	I_SimpleProperty(osgTerrain::TerrainTechnique *, TerrainTechnique, 
	                 __TerrainTechnique_P1__getTerrainTechnique, 
	                 __void__setTerrainTechnique__TerrainTechnique_P1);
	I_SimpleProperty(const osgTerrain::TileID &, TileID, 
	                 __C5_TileID_R1__getTileID, 
	                 __void__setTileID__C5_TileID_R1);
	I_SimpleProperty(bool, TreatBoundariesToValidDataAsDefaultValue, 
	                 __bool__getTreatBoundariesToValidDataAsDefaultValue, 
	                 __void__setTreatBoundariesToValidDataAsDefaultValue__bool);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgTerrain::TileID)
	I_DeclaringFile("osgTerrain/TerrainTile");
	I_Constructor0(____TileID,
	               "",
	               "");
	I_Constructor3(IN, int, in_layer, IN, int, in_x, IN, int, in_y,
	               ____TileID__int__int__int,
	               "",
	               "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_PublicMemberProperty(int, layer);
	I_PublicMemberProperty(int, x);
	I_PublicMemberProperty(int, y);
END_REFLECTOR

