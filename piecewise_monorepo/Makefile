arithmetic/build/compile_commands.json:
	cmake -B arithmetic/build -G Ninja -S arithmetic -DCMAKE_EXPORT_COMPILE_COMMANDS=1
arithmetic_compdb: arithmetic/build/compile_commands.json
arithmetic/build/libarithmetic.a: arithmetic_compdb
	ninja -C arithmetic/build

geometry/square/build/compile_commands.json:
	cmake -B geometry/square/build -G Ninja -S geometry/square -DCMAKE_EXPORT_COMPILE_COMMANDS=1
geometry_square_compdb: geometry/square/build/compile_commands.json
geometry/square/build/libgeometry_square.a: geometry_square_compdb
	ninja -C geometry/square/build

all: arithmetic/build/libarithmetic.a geometry/square/build/libgeometry_square.a

PWD := $(shell pwd)
package-map.json:
	echo "[" >> package-map.json
	echo "  {\"path\": \"$(PWD)/arithmetic\", \"package\": \"cxx-minimal-arithmetic@v0\"}," >> package-map.json
	echo "  {\"path\": \"$(PWD)/geometry/square\", \"package\": \"cxx-minimal-geometry-square@v0\"}" >> package-map.json
	echo "]" >> package-map.json

arithmetic/index.scip: package-map.json arithmetic_compdb
	cd arithmetic; \
	scip-clang --compdb-path=build/compile_commands.json --package-map-path=../package-map.json

geometry/square/index.scip: package-map.json geometry_square_compdb
	cd geometry/square; \
	scip-clang --compdb-path=build/compile_commands.json --package-map-path=../../package-map.json

indexes: arithmetic/index.scip geometry/square/index.scip

snapshots: indexes
	cd arithmetic; scip snapshot --from index.scip --to out
	cd geometry/square; scip snapshot --from index.scip --to out

clean:
	rm -f package-map.json
	rm -rf ./**/build
	rm -rf ./**/index.scip

.PHONY: clean snapshots
