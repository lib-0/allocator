#include "-0_allocator.h"

#include <stdlib.h>

void *g_alloc(g_allocator_t *self, size_t size) {
  if (self) {
    return self->v->alloc(self->context, size);
  } else {
    return malloc(size);
  }
}

void *g_expand(g_allocator_t *self, void *ptr, size_t size) {
  if (self) {
    return self->v->expand(self->context, ptr, size);
  } else {
    return realloc(ptr, size);
  }
}

void g_dealloc(g_allocator_t *self, void *ptr) {
  if (self) {
    self->v->dealloc(self->context, ptr);
  } else {
    free(ptr);
  }
}

void g_0_allocator_destroy_self(g_allocator_t *self) {
  self->v->destroy_self(self->context);
}
