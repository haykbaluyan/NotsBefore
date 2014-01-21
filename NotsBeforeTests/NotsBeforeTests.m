//
//  NotsBeforeTests.m
//  NotsBeforeTests
//
//  Created by Apple on 1/21/14.
//  Copyright (c) 2014 Apple. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface NotsBeforeTests : XCTestCase

@end

@implementation NotsBeforeTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
    XCTFail(@"No implementation for \"%s\"", __PRETTY_FUNCTION__);
}

@end
