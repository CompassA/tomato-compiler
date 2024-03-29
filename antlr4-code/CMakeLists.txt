project(antlr4-code)

if (APPLE)
    message("OS: APPLE")
    SET(ANTLR4_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr4/mac)
elseif (CMAKE_HOST_LINUX)
    message("OS: LINUX")
    SET(ANTLR4_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/antlr4/linux)
endif()

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME} 
    PRIVATE 
        TomLexer.cpp
        ScriptBaseListener.cpp
        ScriptBaseVisitor.cpp
        ScriptLexer.cpp
        ScriptListener.cpp
        ScriptParser.cpp
        ScriptVisitor.cpp
)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} antlr4-runtime)


add_library(antlr4-lib STATIC IMPORTED)
set_target_properties(antlr4-lib PROPERTIES IMPORTED_LOCATION ${ANTLR4_LIB_PATH}/libantlr4-runtime.a)

target_link_libraries(${PROJECT_NAME} PUBLIC antlr4-lib) 

tomato_test(test/lexer_test.cpp)
tomato_test(test/parser_test.cpp)