from unittest import TestCase

import tree_sitter, tree_sitter_smartcode


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_smartcode.language())
        except Exception:
            self.fail("Error loading Smartcode grammar")
