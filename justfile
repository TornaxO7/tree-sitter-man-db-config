default: test

build:
    tree-sitter generate

test: build
    tree-sitter test
