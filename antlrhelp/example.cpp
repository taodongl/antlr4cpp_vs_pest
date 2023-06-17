#include <iostream>

#include "antlr4-runtime.h"
#include "JSONLexer.h"
#include "JSONParser.h"
#include "JSONBaseListener.h"

extern "C" {
    int antlr_json_parse(const char* text);
}
using namespace antlr4;
int antlr_json_parse(const char* text) {
    ANTLRInputStream input(text);
    JSONLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    JSONParser parser(&tokens);
    tree::ParseTree *tree = parser.json();
    //JSONBaseListener listener;
    //tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
    return 0;
}