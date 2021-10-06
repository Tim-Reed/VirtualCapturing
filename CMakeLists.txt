cmake_minimum_required(VERSION 3.10)


project(virtual_capturing)


add_executable(virtual_capturing_app)


target_include_directories(virtual_capturing_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)



# 添加下一级目录
add_subdirectory(src)

if(MSVC)
    option(WITH_CRT_DLL
    "link all libjpeg turbo libraries and executables with the C run time DLL (msvcr.dll) instead of the static c run-time library(libcmt*.lib) The default is use the C run-time DLL only with the libraries and executeables that need it"
    FALSE)
    if(NOT WITH_CRT_DLL)
        foreach(var CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
            if(${var} MATCHES "/MD")
                string(REGEX REPLACE "/MD" "/MT" ${var} "${${var}}")
            endif()
        endforeach()
    endif()
endif()

# 使能测试用例扫描
enable_testing()
add_subdirectory(tests)

