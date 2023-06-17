
// Generated from JSON.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "JSONListener.h"


/**
 * This class provides an empty implementation of JSONListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  JSONBaseListener : public JSONListener {
public:

  virtual void enterJson(JSONParser::JsonContext * /*ctx*/) override { }
  virtual void exitJson(JSONParser::JsonContext * /*ctx*/) override { }

  virtual void enterObj(JSONParser::ObjContext * /*ctx*/) override { }
  virtual void exitObj(JSONParser::ObjContext * /*ctx*/) override { }

  virtual void enterPair(JSONParser::PairContext * /*ctx*/) override { }
  virtual void exitPair(JSONParser::PairContext * /*ctx*/) override { }

  virtual void enterArr(JSONParser::ArrContext * /*ctx*/) override { }
  virtual void exitArr(JSONParser::ArrContext * /*ctx*/) override { }

  virtual void enterValue(JSONParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(JSONParser::ValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

