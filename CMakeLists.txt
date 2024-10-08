cmake_minimum_required(VERSION 3.26)
project(gdTest)

set(CMAKE_CXX_STANDARD 20)

if(CATALYST)
  message("Building for Catalyst")
  add_definitions(-DCC_TARGET_OS_MAC -DGEODE_IS_MACOS -DCommentType=CommentTypeDummy)
  set(CMAKE_SYSTEM_NAME iOS)
  set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-target x86_64-apple-ios13.1-macabi -iframework ${CMAKE_OSX_SYSROOT}/System/iOSSupport/System/Library/Frameworks")
  set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-target x86_64-apple-ios13.1-macabi -iframework ${CMAKE_OSX_SYSROOT}/System/iOSSupport/System/Library/Frameworks")
else()
  message("Building for iOS")
  add_definitions(-DCC_TARGET_OS_IPHONE -DGEODE_IS_MACOS -DCommentType=CommentTypeDummy)
  execute_process(COMMAND xcrun --show-sdk-path --sdk iphoneos
    OUTPUT_VARIABLE IOS_SDK
    OUTPUT_STRIP_TRAILING_WHITESPACE
  )
  set(CMAKE_OSX_ARCHITECTURES arm64)
  set(CMAKE_OSX_SYSROOT ${IOS_SDK})
endif()

add_subdirectory(auby2)

file(GLOB_RECURSE PROJ_SRC src/*.cc)
add_library(gdTest SHARED
  ${PROJ_SRC}
)

target_include_directories(gdTest PUBLIC src)
target_link_libraries(gdTest PUBLIC auby2)

if(CATALYST)
  add_custom_command(TARGET gdTest POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:gdTest> ~/Library/Containers/io.playcover.PlayCover/Auby.app/Frameworks/libgdTest.dylib
  )
endif()
