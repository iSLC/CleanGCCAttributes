# CleanGCCAttributes
Helper macros to make the attribute syntax in GCC cleaner.

# Example 1

Declaring a vector type:

```C
typedef float V4SF __attribute__ ((__vector_size__(16)));
```

Becomes:

```C
typedef float V4SF GATTRIB(vector_size(16));
```

# Example 2

Forcing a function to always be inline:
```C
inline float __attribute__ ((__always_inline__)) add(float a, float b)
{
    return a + b;
}
```

Becomes:
```C
inline float GATTRIB(always_inline) add(float a, float b)
{
    return a + b;
}
```

# Example 3

To specify more than one attribute, append an `S` to the macro name so that `GATTRIB` becomes `GATTRIBS`.

For example:
```C
inline void __attribute__ ((__always_inline__, __nonnull__(1), __nothrow__, __unused__)) set_memory(void * ptr, int value, size_t num)
{
    memset(ptr, value, num);
}
```

Becomes:
```C
inline void GATTRIBS(always_inline, nonnull(1), nothrow, unused) set_memory(void * ptr, int value, size_t num)
{
    memset(ptr, value, num);
}
```

# Notes:

* If you need extra attributes other than the one's included then feel free to create macros for them.
  * To add a new attribute you create a macro prefixed with `GATTRIB_`.
    * For example: `#define GATTRIB_someattr __theattr__`
* The default macro supports up to **8** attributes. You must modify it if you need more than 8 attributes. Should be fairly easy.
* There's also a shorter alias called `GATTR` included for convenience.