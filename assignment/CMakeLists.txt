list(APPEND TARGETS assignment)
set(TARGETS ${TARGETS} PARENT_SCOPE)

add_executable(assignment main.cpp include/clogger_adapter.h src/clogger_adapter.cpp include/decorators/base_decorator.h src/decorators/base_decorator.cpp include/decorators/running_time_decorator.h src/decorators/running_time_decorator.cpp)
target_include_directories(assignment PRIVATE include)

add_subdirectory(src)

target_sources(assignment
        PRIVATE
        program.cpp
        )

add_subdirectory(clib)
target_link_libraries(assignment PUBLIC clogger)

list(APPEND TARGETS assignment)
set(TARGETS ${TARGETS} PARENT_SCOPE)