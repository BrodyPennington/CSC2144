add_executable(Lab09exe
        Lab09.cpp
        RomanNumeral.cpp
        )

target_include_directories(Lab09exe PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Lab09>
        $<INSTALL_INTERFACE:Lab09>  # <prefix>/include/mylib
)

