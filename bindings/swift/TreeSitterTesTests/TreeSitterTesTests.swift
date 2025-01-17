import XCTest
import SwiftTreeSitter
import TreeSitterTes

final class TreeSitterTesTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tes())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Tes grammar")
    }
}
