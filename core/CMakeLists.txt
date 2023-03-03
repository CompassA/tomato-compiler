project(tomato-compile-core)

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME} 
    PRIVATE
        ScriptEvaluator.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC antlr4-code)
target_include_directories(${PROJECT_NAME} PUBLIC include)

tomato_test(test/ScriptEvaluatorTest.cpp)