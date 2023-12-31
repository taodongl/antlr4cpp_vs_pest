
// Generated from JSON.g4 by ANTLR 4.13.0


#include "JSONLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct JSONLexerStaticData final {
  JSONLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  JSONLexerStaticData(const JSONLexerStaticData&) = delete;
  JSONLexerStaticData(JSONLexerStaticData&&) = delete;
  JSONLexerStaticData& operator=(const JSONLexerStaticData&) = delete;
  JSONLexerStaticData& operator=(JSONLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag jsonlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
JSONLexerStaticData *jsonlexerLexerStaticData = nullptr;

void jsonlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (jsonlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(jsonlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<JSONLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "STRING", "ESC", "UNICODE", "HEX", "SAFECODEPOINT", "NUMBER", "INT", 
      "EXP", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'{'", "','", "'}'", "':'", "'['", "']'", "'true'", "'false'", 
      "'null'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "STRING", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,12,131,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,
  	1,8,1,8,1,9,1,9,1,9,5,9,69,8,9,10,9,12,9,72,9,9,1,9,1,9,1,10,1,10,1,10,
  	3,10,79,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,3,
  	14,92,8,14,1,14,1,14,1,14,4,14,97,8,14,11,14,12,14,98,3,14,101,8,14,1,
  	14,3,14,104,8,14,1,15,1,15,1,15,5,15,109,8,15,10,15,12,15,112,9,15,3,
  	15,114,8,15,1,16,1,16,3,16,118,8,16,1,16,4,16,121,8,16,11,16,12,16,122,
  	1,17,4,17,126,8,17,11,17,12,17,127,1,17,1,17,0,0,18,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,0,23,0,25,0,27,0,29,11,31,0,33,0,35,12,
  	1,0,8,8,0,34,34,47,47,92,92,98,98,102,102,110,110,114,114,116,116,3,0,
  	48,57,65,70,97,102,3,0,0,31,34,34,92,92,1,0,48,57,1,0,49,57,2,0,69,69,
  	101,101,2,0,43,43,45,45,3,0,9,10,13,13,32,32,136,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,29,1,0,0,0,0,35,1,0,0,0,1,37,1,0,
  	0,0,3,39,1,0,0,0,5,41,1,0,0,0,7,43,1,0,0,0,9,45,1,0,0,0,11,47,1,0,0,0,
  	13,49,1,0,0,0,15,54,1,0,0,0,17,60,1,0,0,0,19,65,1,0,0,0,21,75,1,0,0,0,
  	23,80,1,0,0,0,25,86,1,0,0,0,27,88,1,0,0,0,29,91,1,0,0,0,31,113,1,0,0,
  	0,33,115,1,0,0,0,35,125,1,0,0,0,37,38,5,123,0,0,38,2,1,0,0,0,39,40,5,
  	44,0,0,40,4,1,0,0,0,41,42,5,125,0,0,42,6,1,0,0,0,43,44,5,58,0,0,44,8,
  	1,0,0,0,45,46,5,91,0,0,46,10,1,0,0,0,47,48,5,93,0,0,48,12,1,0,0,0,49,
  	50,5,116,0,0,50,51,5,114,0,0,51,52,5,117,0,0,52,53,5,101,0,0,53,14,1,
  	0,0,0,54,55,5,102,0,0,55,56,5,97,0,0,56,57,5,108,0,0,57,58,5,115,0,0,
  	58,59,5,101,0,0,59,16,1,0,0,0,60,61,5,110,0,0,61,62,5,117,0,0,62,63,5,
  	108,0,0,63,64,5,108,0,0,64,18,1,0,0,0,65,70,5,34,0,0,66,69,3,21,10,0,
  	67,69,3,27,13,0,68,66,1,0,0,0,68,67,1,0,0,0,69,72,1,0,0,0,70,68,1,0,0,
  	0,70,71,1,0,0,0,71,73,1,0,0,0,72,70,1,0,0,0,73,74,5,34,0,0,74,20,1,0,
  	0,0,75,78,5,92,0,0,76,79,7,0,0,0,77,79,3,23,11,0,78,76,1,0,0,0,78,77,
  	1,0,0,0,79,22,1,0,0,0,80,81,5,117,0,0,81,82,3,25,12,0,82,83,3,25,12,0,
  	83,84,3,25,12,0,84,85,3,25,12,0,85,24,1,0,0,0,86,87,7,1,0,0,87,26,1,0,
  	0,0,88,89,8,2,0,0,89,28,1,0,0,0,90,92,5,45,0,0,91,90,1,0,0,0,91,92,1,
  	0,0,0,92,93,1,0,0,0,93,100,3,31,15,0,94,96,5,46,0,0,95,97,7,3,0,0,96,
  	95,1,0,0,0,97,98,1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,101,1,0,0,0,100,
  	94,1,0,0,0,100,101,1,0,0,0,101,103,1,0,0,0,102,104,3,33,16,0,103,102,
  	1,0,0,0,103,104,1,0,0,0,104,30,1,0,0,0,105,114,5,48,0,0,106,110,7,4,0,
  	0,107,109,7,3,0,0,108,107,1,0,0,0,109,112,1,0,0,0,110,108,1,0,0,0,110,
  	111,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,113,105,1,0,0,0,113,106,1,
  	0,0,0,114,32,1,0,0,0,115,117,7,5,0,0,116,118,7,6,0,0,117,116,1,0,0,0,
  	117,118,1,0,0,0,118,120,1,0,0,0,119,121,7,3,0,0,120,119,1,0,0,0,121,122,
  	1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,34,1,0,0,0,124,126,7,7,0,
  	0,125,124,1,0,0,0,126,127,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,
  	129,1,0,0,0,129,130,6,17,0,0,130,36,1,0,0,0,13,0,68,70,78,91,98,100,103,
  	110,113,117,122,127,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  jsonlexerLexerStaticData = staticData.release();
}

}

JSONLexer::JSONLexer(CharStream *input) : Lexer(input) {
  JSONLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *jsonlexerLexerStaticData->atn, jsonlexerLexerStaticData->decisionToDFA, jsonlexerLexerStaticData->sharedContextCache);
}

JSONLexer::~JSONLexer() {
  delete _interpreter;
}

std::string JSONLexer::getGrammarFileName() const {
  return "JSON.g4";
}

const std::vector<std::string>& JSONLexer::getRuleNames() const {
  return jsonlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& JSONLexer::getChannelNames() const {
  return jsonlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& JSONLexer::getModeNames() const {
  return jsonlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& JSONLexer::getVocabulary() const {
  return jsonlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView JSONLexer::getSerializedATN() const {
  return jsonlexerLexerStaticData->serializedATN;
}

const atn::ATN& JSONLexer::getATN() const {
  return *jsonlexerLexerStaticData->atn;
}




void JSONLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  jsonlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(jsonlexerLexerOnceFlag, jsonlexerLexerInitialize);
#endif
}
