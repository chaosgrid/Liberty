# CMake minimum version
cmake_minimum_required(VERSION 3.28)

# Set the project name (change as needed)
project(LibertyResourceExtractor LANGUAGES C CXX)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_GENERATOR MATCHES "^Visual Studio")

    block(SCOPE_FOR VARIABLES)
        cmake_path(
            CONVERT "$ENV{ProgramFiles\(x86\)}/Microsoft Visual Studio/Installer"
            TO_CMAKE_PATH_LIST vswhere.dir
            NORMALIZE)
        # This only temporarily affects the variable since we're inside a block.
        list(APPEND CMAKE_SYSTEM_PROGRAM_PATH "${vswhere.dir}")
        find_program(VSWHERE_EXECUTABLE NAMES vswhere DOC "Visual Studio Locator" REQUIRED)

        execute_process(
            COMMAND "${VSWHERE_EXECUTABLE}" -prerelease -nologo -nocolor -format json -products "*" -utf8 -sort
            ENCODING UTF-8
            OUTPUT_VARIABLE candidates
            OUTPUT_STRIP_TRAILING_WHITESPACE)
        #message(STATUS ${candidates})
        string(JSON candidates.length LENGTH "${candidates}")
        if (candidates.length EQUAL 0)
            message(STATUS "Could not find Visual Studio")
        else()
            string(JSON candidate.install.path GET "${candidates}" 0 "installationPath")
            if (NOT candidate.install.path)
                message(STATUS "Could not find Visual Studio install path")
            else()
                cmake_path(
                    CONVERT "${candidate.install.path}"
                    TO_CMAKE_PATH_LIST candidate.install.path
                    NORMALIZE)
                message(STATUS "Found Visual Studio: ${candidate.install.path}")
                set(VISUAL_STUDIO_DIR "${candidate.install.path}"
                    CACHE PATH "Visual Studio Installation Path")
            endif()
        endif()
    endblock()
endif()

set(VISUAL_STUDIO_SDK_DIR "${VISUAL_STUDIO_DIR}/VSSDK/VisualStudioIntegration/Common/Inc")
set(VISUAL_STUDIO_VC_PACKAGES_DIR "${VISUAL_STUDIO_DIR}/Common7/IDE/VC/vcpackages")
set(RESEDIT_PATH "${VISUAL_STUDIO_VC_PACKAGES_DIR}/resedit.dll")
set(RESEDITUI_PATH "${VISUAL_STUDIO_VC_PACKAGES_DIR}/1033/reseditui.dll")

if(EXISTS "${CMAKE_SOURCE_DIR}/resedit.dll")
    set(RESEDIT_PATH "${CMAKE_SOURCE_DIR}/resedit.dll")
endif()

if(EXISTS "${CMAKE_SOURCE_DIR}/reseditui.dll")
    set(RESEDITUI_PATH "${CMAKE_SOURCE_DIR}/reseditui.dll")
endif()

if(NOT EXISTS "${RESEDIT_PATH}")
    message(FATAL_ERROR "Failed to find resedit.dll '${RESEDIT_PATH}'")
else()
    message(STATUS "RESEDIT_PATH '${RESEDIT_PATH}'")
endif()

if(NOT EXISTS "${RESEDITUI_PATH}")
    message(FATAL_ERROR "Failed to find reseditui.dll '${RESEDITUI_PATH}'")
else()
    message(STATUS "RESEDITUI_PATH '${RESEDITUI_PATH}'")
endif()

add_executable(ExportTLB "ExportTLB.cpp")
add_custom_command(
    TARGET ExportTLB POST_BUILD
    COMMAND $<TARGET_FILE:ExportTLB> "${RESEDIT_PATH}" "${CMAKE_CURRENT_BINARY_DIR}/resedit.tlb"
    COMMENT "Running ExportTLB to generate resedit.tlb in ${CMAKE_CURRENT_BINARY_DIR}"
)
set_target_properties(ExportTLB PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")

add_executable(ExportResource "ExportResource.cpp")
add_dependencies(ExportResource ExportTLB)
target_include_directories(ExportResource PRIVATE "${VISUAL_STUDIO_SDK_DIR}" "${CMAKE_CURRENT_BINARY_DIR}")
add_custom_command(
    TARGET ExportResource POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${RESEDIT_PATH}" "$<TARGET_FILE_DIR:ExportResource>/resedit.dll"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${RESEDITUI_PATH}" "$<TARGET_FILE_DIR:ExportResource>/1033/reseditui.dll"
)
set_target_properties(ExportResource PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")
