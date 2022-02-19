#include "postgres.h"
#include "fmgr.h"
PG_MODULE_MAGIC;
PG_FUNCTION_INFO_V1(simd_cosine_distance);
Datum simd_cosine_distance(PG_FUNCTION_ARGS) {
    PG_RETURN_FLOAT8(0.0);
}
