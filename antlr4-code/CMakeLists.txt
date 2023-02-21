project(antlr4-code)

if (APPLE)
    SET(ANTLR4_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/mac)
endif()

add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME} 
    PRIVATE 
        TomLexer.cpp
        TomParserBaseListener.cpp
        TomParserBaseVisitor.cpp
        TomParserLexer.cpp
        TomParserListener.cpp
        TomParserParser.cpp
        TomParserVisitor.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC tomato-antlr antlr4-runtime)


add_library(antlr4-lib STATIC IMPORTED)
set_target_properties(antlr4-lib PROPERTIES IMPORTED_LOCATION ${ANTLR4_LIB_PATH}/libantlr4-runtime.a)

target_link_libraries(${PROJECT_NAME} PUBLIC antlr4-lib) 

tomato_test(test/lexer_test.cpp)
tomato_test(test/parser_test.cpp)