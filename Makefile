build: src/main.c src/matrix/matrix.c
	@mkdir -p _build
	@gcc src/main.c src/matrix/matrix.c -o _build/matrix
	@echo "build complete"
run:
	@./_build/matrix

clean:
	@if [ -d "_build" ]; then rm -Rf _build; fi
	@echo "Cleaned"

test: tests/*_test.c
	@for file in $^; do\
		echo $${file};\
		gcc $${file} src/matrix/matrix.c -o _build/test_bin;\
		./_build/test_bin;\
		echo ;\
	done
