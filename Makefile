MODULES = pg_simd_vec
PG_CONFIG = pg_config
include $(shell $(PG_CONFIG) --pgxs)
