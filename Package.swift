// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "ImgSize",
	platforms: [.macOS(.v13), .iOS(.v16)],
    products: [
        .library(
            name: "ImgSize",
            targets: ["ImgSize"]),
		.library(
			name: "CPP",
			targets: ["CPP"]
		)
    ],
    targets: [
        .target(
			name: "ImgSize",
			dependencies: ["CPP"],
			publicHeadersPath: "include",
			cxxSettings: [
				.headerSearchPath("Sources")
			]
		),
        .testTarget(
            name: "ImgSizeTests",
            dependencies: ["ImgSize"],
			resources: [.copy("Resources")]
		),
		.target(
			name: "CPP"
		)
		
    ]
)
