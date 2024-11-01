package tree_sitter_mandbconfig_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-mandbconfig"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mandbconfig.Language())
	if language == nil {
		t.Errorf("Error loading Mandbconfig grammar")
	}
}
