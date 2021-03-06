/*
 * Copyright 2011-2012 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#ifndef __CONFIG_H__
#define __CONFIG_H__

#if !defined(BGFX_CONFIG_RENDERER_DIRECT3D) && !defined(BGFX_CONFIG_RENDERER_OPENGL) && !defined(BGFX_CONFIG_RENDERER_OPENGLES) && !defined(BGFX_CONFIG_RENDERER_NULL)
#	ifndef BGFX_CONFIG_RENDERER_DIRECT3D
#		define BGFX_CONFIG_RENDERER_DIRECT3D (BX_PLATFORM_WINDOWS|BX_PLATFORM_XBOX360)
#	endif // BGFX_CONFIG_RENDERER_DIRECT3D

#	ifndef BGFX_CONFIG_RENDERER_OPENGL
#		define BGFX_CONFIG_RENDERER_OPENGL (BX_PLATFORM_LINUX|BX_PLATFORM_OSX)
#	endif // BGFX_CONFIG_RENDERER_OPENGL

#	ifndef BGFX_CONFIG_RENDERER_OPENGLES
#		define BGFX_CONFIG_RENDERER_OPENGLES (BX_PLATFORM_NACL|BX_PLATFORM_ANDROID|BX_PLATFORM_IOS)
#	endif // BGFX_CONFIG_RENDERER_OPENGLES

#	ifndef BGFX_CONFIG_RENDERER_NULL
#		define BGFX_CONFIG_RENDERER_NULL (!(BGFX_CONFIG_RENDERER_DIRECT3D|BGFX_CONFIG_RENDERER_OPENGL|BGFX_CONFIG_RENDERER_OPENGLES) )
#	endif // BGFX_CONFIG_RENDERER_NULL
#endif // !defined...

#ifndef BGFX_CONFIG_DEBUG_PERFHUD
#	define BGFX_CONFIG_DEBUG_PERFHUD 0
#endif // BGFX_CONFIG_DEBUG_NVPERFHUD

#ifndef BGFX_CONFIG_DEBUG_PIX
#	define BGFX_CONFIG_DEBUG_PIX 0
#endif // BGFX_CONFIG_DEBUG_PIX

#ifndef BGFX_CONFIG_DEBUG_GREMEDY
#	define BGFX_CONFIG_DEBUG_GREMEDY 0
#endif // BGFX_CONFIG_DEBUG_GREMEDY

#ifndef BGFX_CONFIG_MULTITHREADED
#	define BGFX_CONFIG_MULTITHREADED ( (BX_PLATFORM_WINDOWS|BX_PLATFORM_XBOX360|BX_PLATFORM_NACL)&(!BGFX_CONFIG_RENDERER_NULL) )
#endif // BGFX_CONFIG_MULTITHREADED

#ifndef BGFX_CONFIG_MAX_DRAW_CALLS
#	define BGFX_CONFIG_MAX_DRAW_CALLS (8<<10)
#endif // BGFX_CONFIG_MAX_DRAW_CALLS

#ifndef BGFX_CONFIG_MAX_MATRIX_CACHE
#	define BGFX_CONFIG_MAX_MATRIX_CACHE (16<<10)
#endif // BGFX_CONFIG_MAX_MATRIX_CACHE

#ifndef BGFX_CONFIG_MAX_VIEWS
#	define BGFX_CONFIG_MAX_VIEWS 32
#endif // BGFX_CONFIG_MAX_VIEWS

#ifndef BGFX_CONFIG_MAX_VERTEX_DECLS
#	define BGFX_CONFIG_MAX_VERTEX_DECLS 64
#endif // BGFX_CONFIG_MAX_VERTEX_DECLS

#ifndef BGFX_CONFIG_MAX_INDEX_BUFFERS
#	define BGFX_CONFIG_MAX_INDEX_BUFFERS (4<<10)
#endif // BGFX_CONFIG_MAX_INDEX_BUFFERS

#ifndef BGFX_CONFIG_MAX_VERTEX_BUFFERS
#	define BGFX_CONFIG_MAX_VERTEX_BUFFERS (4<<10)
#endif // BGFX_CONFIG_MAX_VERTEX_BUFFERS

#ifndef BGFX_CONFIG_MAX_DYNAMIC_INDEX_BUFFERS
#	define BGFX_CONFIG_MAX_DYNAMIC_INDEX_BUFFERS (4<<10)
#endif // BGFX_CONFIG_MAX_DYNAMIC_INDEX_BUFFERS

#ifndef BGFX_CONFIG_MAX_DYNAMIC_VERTEX_BUFFERS
#	define BGFX_CONFIG_MAX_DYNAMIC_VERTEX_BUFFERS (4<<10)
#endif // BGFX_CONFIG_MAX_DYNAMIC_VERTEX_BUFFERS

#ifndef BGFX_CONFIG_DYNAMIC_INDEX_BUFFER_SIZE
#	define BGFX_CONFIG_DYNAMIC_INDEX_BUFFER_SIZE (1<<20)
#endif // BGFX_CONFIG_DYNAMIC_INDEX_BUFFER_SIZE

#ifndef BGFX_CONFIG_DYNAMIC_VERTEX_BUFFER_SIZE
#	define BGFX_CONFIG_DYNAMIC_VERTEX_BUFFER_SIZE (3<<20)
#endif // BGFX_CONFIG_DYNAMIC_VERTEX_BUFFER_SIZE

#ifndef BGFX_CONFIG_MAX_VERTEX_SHADERS
#	define BGFX_CONFIG_MAX_VERTEX_SHADERS 256
#endif // BGFX_CONFIG_MAX_VERTEX_SHADERS

#ifndef BGFX_CONFIG_MAX_FRAGMENT_SHADERS
#	define BGFX_CONFIG_MAX_FRAGMENT_SHADERS 256
#endif // BGFX_CONFIG_MAX_FRAGMENT_SHADERS

#ifndef BGFX_CONFIG_MAX_MATERIALS
#	define BGFX_CONFIG_MAX_MATERIALS 512
#endif // BGFX_CONFIG_MAX_MATERIALS

#ifndef BGFX_CONFIG_MAX_PROGRAMS
#	define BGFX_CONFIG_MAX_PROGRAMS (4<<10)
#endif // BGFX_CONFIG_MAX_PROGRAMS

#ifndef BGFX_CONFIG_MAX_TEXTURES
#	define BGFX_CONFIG_MAX_TEXTURES (4<<10)
#endif // BGFX_CONFIG_MAX_TEXTURES

#ifndef BGFX_CONFIG_MAX_RENDER_TARGETS
#	define BGFX_CONFIG_MAX_RENDER_TARGETS 64
#endif // BGFX_CONFIG_MAX_RENDER_TARGETS

#ifndef BGFX_CONFIG_MAX_UNIFORMS
#	define BGFX_CONFIG_MAX_UNIFORMS 512
#endif // BGFX_CONFIG_MAX_CONSTANTS

#ifndef BGFX_CONFIG_MAX_COMMAND_BUFFER_SIZE
#	define BGFX_CONFIG_MAX_COMMAND_BUFFER_SIZE (64<<10)
#endif // BGFX_CONFIG_MAX_COMMAND_BUFFER_SIZE

#ifndef BGFX_CONFIG_TRANSIENT_VERTEX_BUFFER_SIZE
#	define BGFX_CONFIG_TRANSIENT_VERTEX_BUFFER_SIZE (6<<20)
#endif // BGFX_CONFIG_TRANSIENT_VERTEX_BUFFER_SIZE

#ifndef BGFX_CONFIG_TRANSIENT_INDEX_BUFFER_SIZE
#	define BGFX_CONFIG_TRANSIENT_INDEX_BUFFER_SIZE (2<<20)
#endif // BGFX_CONFIG_TRANSIENT_INDEX_BUFFER_SIZE

#ifndef BGFX_CONFIG_MAX_CONSTANT_BUFFER_SIZE
#	define BGFX_CONFIG_MAX_CONSTANT_BUFFER_SIZE (512<<10)
#endif // BGFX_CONFIG_MAX_CONSTANT_BUFFER_SIZE

#ifndef BGFX_CONFIG_USE_TINYSTL
#	define BGFX_CONFIG_USE_TINYSTL 0
#endif // BGFX_CONFIG_USE_TINYSTL

#endif // __CONFIG_H__
