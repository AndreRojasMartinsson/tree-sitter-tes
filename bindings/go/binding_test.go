package tree_sitter_smartcode_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_smartcode "github.com/andrerojasmartinsson/tree-sitter-smartcode/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_smartcode.Language())
	if language == nil {
		t.Errorf("Error loading Smartcode grammar")
	}
}
