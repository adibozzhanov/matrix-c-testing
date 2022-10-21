DIR_NAME?=matrix

run:
	@mkdir -p _build
	@gcc src/${DIR_NAME}/main.c src/${DIR_NAME}/matrix.c -o _build/matrix
	@echo "Built successfully"
	@echo "Using: ${DIR_NAME}"
	@echo "------------------"
	@./_build/matrix


clean:
	@if [ -d "_build" ]; then rm -Rf _build; fi
	@echo "Cleaned"

test: tests/*_test.c
	@echo "Using: ${DIR_NAME}"
	@echo "------------------"
	@mkdir -p _build
	@for file in $^; do\
		echo "$${file}";\
		gcc $${file} src/${DIR_NAME}/matrix.c -o _build/test_bin;\
		./_build/test_bin || (echo "SEGFAULT");\
		echo ;\
	done
	@echo "------------------"
