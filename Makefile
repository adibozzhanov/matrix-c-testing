build: src/main.c src/matrix/matrix.c
	@gcc src/main.c src/matrix/matrix.c -o _build/matrix
	@echo "build complete"
run:
	@./_build/matrix

test: tests/*_test.c
	@for file in $^; do\
		echo $${file};\
		gcc $${file} src/matrix/matrix.c -o _build/test_matrix;\
		./_build/test_matrix;\
		echo ;\
	done
