

add_executable(
    unit_tests
    ${CMAKE_CURRENT_SOURCE_DIR}/virtual_cam_unittest.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/virtual_camera.cpp
    )


target_include_directories(unit_tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../src)


target_include_directories(unit_tests PUBLIC ${GOOGLE_TEST_INCLUDE_DIR})


target_link_directories(unit_tests PUBLIC ${GOOGLE_TEST_LIB_DIR})


target_link_libraries(unit_tests PUBLIC gtest.lib)
target_link_libraries(unit_tests PUBLIC gtest_main.lib)


include(GoogleTest)

gtest_discover_tests(unit_tests
  PROPERTIES
    LABELS "unit"
  DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )

add_test(case1 COMMAND unit_tests)


