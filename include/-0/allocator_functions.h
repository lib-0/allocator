#ifndef G_0_ALLOCATOR_FUNCTIONS_H
#define G_0_ALLOCATOR_FUNCTIONS_H

#ifdef __cplusplus
#include <cstddef>
#else
#include <stdbool.h>
#include <stddef.h>
#endif

#include "-0_common.h"

#include "allocator_types.h"

#ifdef __cplusplus
extern "C" {
#endif

G_API void *g_0_allocator_alloc(g_0_allocator_t *self, size_t size);
G_API void *g_0_allocator_expand(g_0_allocator_t *self, void *ptr, size_t size);
G_API void g_0_allocator_dealloc(g_0_allocator_t *self, void *ptr);
G_API void g_0_allocator_destroy_self(g_0_allocator_t *self);

#ifdef __cplusplus
}
#endif

#endif
