/**********************************************************************
 *
 *    FILE:            DrawArrayLengths.cpp
 *
 *    DESCRIPTION:    Read/Write osg::DrawArrayLengths in binary format to disk.
 *
 *    CREATED BY:        Auto generated by iveGenerated
 *                    and later modified by Rune Schmidt Jensen.
 *
 *    HISTORY:        Created 20.3.2003
 *
 *    Copyright 2003 VR-C
 **********************************************************************/

#include "Exception.h"
#include "DrawArrayLengths.h"
#include "PrimitiveSet.h"

using namespace ive;

void DrawArrayLengths::write(DataOutputStream* out){
    // Write DrawArrayLengths's identification.
    out->writeInt(IVEDRAWARRAYLENGTHS);
    // If the osg class is inherited by any other class we should also write this to file.
    osg::PrimitiveSet*  prim = dynamic_cast<osg::PrimitiveSet*>(this);
    if(prim){
        ((ive::PrimitiveSet*)(prim))->write(out);
    }
    else
        out_THROW_EXCEPTION("DrawArrayLengths::write(): Could not cast this osg::DrawArrayLengths to an osg::PrimitiveSet.");

    // Write DrawArrayLengths's properties.
    out->writeInt(getFirst());

    // Write array length and its elements.
    out->writeInt(size());
    for(unsigned int i=0; i<size(); i++){
        out->writeInt(((*this))[i]);
    }

}

void DrawArrayLengths::read(DataInputStream* in){
    // Read DrawArrayLengths's identification.
    int id = in->peekInt();
    if(id == IVEDRAWARRAYLENGTHS){
        // Code to read DrawArrayLengths's properties.
        id = in->readInt();
        // If the osg class is inherited by any other class we should also read this from file.
        osg::PrimitiveSet*  prim = dynamic_cast<osg::PrimitiveSet*>(this);
        if(prim){
            ((ive::PrimitiveSet*)(prim))->read(in);
        }
        else
            in_THROW_EXCEPTION("DrawArrayLengths::read(): Could not cast this osg::DrawArrayLengths to an osg::PrimitiveSet.");

        // Read properties
        setFirst(in->readInt());
    
        // Read array length and its elements.
        int size = in->readInt();
        for(int i=0; i<size; i++){
            push_back(in->readInt());
        }

    }
    else{
        in_THROW_EXCEPTION("DrawArrayLengths::read(): Expected DrawArrayLengths identification.");
    }
}
