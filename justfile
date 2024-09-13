# Currently set to `just test`
default: test

# Alias for `tree-sitter generate`
build:
    tree-sitter generate

# Alias for `tree-sitter test` and `build`
test: build
    tree-sitter test
