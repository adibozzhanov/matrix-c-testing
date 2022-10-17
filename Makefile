DIR_NAME?=matrix

build:  src/matrix/matrix.c
	@mkdir -p _build
	@gcc src/${DIR_NAME}/main.c src/${DIR_NAME}/matrix.c -o _build/matrix
	@echo "build complete"
run:
	@./_build/matrix

clean:
	@if [ -d "_build" ]; then rm -Rf _build; fi
	@echo "Cleaned"

test: tests/*_test.c

	@mkdir -p _build
	@for file in $^; do\
		echo "$${file}";\
		gcc $${file} src/${DIR_NAME}/matrix.c -o _build/test_bin;\
		./_build/test_bin;\
		echo ;\
	done
