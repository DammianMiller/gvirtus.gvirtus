/*
 * gVirtuS -- A GPGPU transparent virtualization component.
 *
 * Copyright (C) 2009-2010  The University of Napoli Parthenope at Naples.
 *
 * This file is part of gVirtuS.
 *
 * gVirtuS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * gVirtuS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gVirtuS; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Written by: Giuseppe Coviello <giuseppe.coviello@uniparthenope.it>,
 *             Department of Applied Science
 */

#include "CudaRt.h"

using namespace std;

#ifndef CUDART_VERSION
#error CUDART_VERSION not defined
#endif

#if CUDART_VERSION <= 2030

#include <cuda_gl_interop.h>

extern "C" __host__ cudaError_t CUDARTAPI cudaGLMapBufferObject(void **devPtr, GLuint bufObj) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLMapBufferObjectAsync(void **devPtr, GLuint bufObj,
        cudaStream_t stream) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLRegisterBufferObject(GLuint bufObj) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLSetBufferObjectMapFlags(GLuint bufObj,
        unsigned int flags) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLSetGLDevice(int device) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLUnmapBufferObject(GLuint bufObj) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLUnmapBufferObjectAsync(GLuint bufObj,
        cudaStream_t stream) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}

extern "C" __host__ cudaError_t CUDARTAPI cudaGLUnregisterBufferObject(GLuint bufObj) {
    cerr << "I'm sorry but it isn't possibile to use OpenGL Interoperability "
            << "API." << endl << "Giving up ..." << endl;
    exit(-1);
    return cudaErrorUnknown;
}
#endif
