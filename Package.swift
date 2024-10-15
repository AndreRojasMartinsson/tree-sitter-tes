// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSmartcode",
    products: [
        .library(name: "TreeSitterSmartcode", targets: ["TreeSitterSmartcode"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSmartcode",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSmartcodeTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSmartcode",
            ],
            path: "bindings/swift/TreeSitterSmartcodeTests"
        )
    ],
    cLanguageStandard: .c11
)
