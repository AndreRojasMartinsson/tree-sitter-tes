import XCTest
import SwiftTreeSitter
import TreeSitterSmartcode

final class TreeSitterSmartcodeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_smartcode())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Smartcode grammar")
    }
}
