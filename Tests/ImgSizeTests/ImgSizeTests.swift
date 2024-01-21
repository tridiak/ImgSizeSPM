import XCTest
@testable import ImgSize

final class ImgSizeTests: XCTestCase {
	func imageSize(url: URL, expected type: ImgSizeType) {
		let sz = GetImageSize(for: url.path())
		XCTAssertNotNil(sz)
		if let sz {
			XCTAssertEqual(sz.imgType, type)
			XCTAssertFalse(sz.sizes.isEmpty)
			if !sz.sizes.isEmpty {
				XCTAssertEqual(sz.sizes[0].w, 1024)
				XCTAssertEqual(sz.sizes[0].h, 1024)
			}
			
		}
	}
	
	func testExample() throws {
		// XCTest Documentation
		// https://developer.apple.com/documentation/xctest

		// Defining Test Cases and Test Methods
		// https://developer.apple.com/documentation/xctest/defining_test_cases_and_test_methods
		
		let b = Bundle.module
		var url = b.url(forResource: "smiley", withExtension: "jpg", subdirectory: "Resources")
		url = try XCTUnwrap(url)
		imageSize(url: url!, expected: .jpg)
		
		url = b.url(forResource: "smiley", withExtension: "png", subdirectory: "Resources")
		url = try XCTUnwrap(url)
		imageSize(url: url!, expected: .png)
		
		url = b.url(forResource: "smiley", withExtension: "gif", subdirectory: "Resources")
		url = try XCTUnwrap(url)
		imageSize(url: url!, expected: .gif)
	}
}
