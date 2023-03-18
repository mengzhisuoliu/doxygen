/* Generated By:JavaCC: Do not edit this line. TokenManager.h Version 7.0 */
/* JavaCCOptions:STATIC=false,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef JAVACC_TOKENMANAGER_H
#define JAVACC_TOKENMANAGER_H

#include <iostream>
#include "JavaCC.h"
#include "Token.h"

namespace vhdl {
namespace parser {
/**
 * An implementation for this interface is generated by
 * JavaCCParser.  The user is free to use any implementation
 * of their choice.
 */

class TokenManager {
public:
  virtual       ~TokenManager() { }
  /** This gets the next token from the input stream.
   *  A token of kind 0 (`<EOF>`) should be returned on EOF.
   */
  virtual Token *getNextToken() = 0;
  virtual void   setParser(void* parser) {};
  virtual void   lexicalError() {
  	std::cerr << "Lexical error encountered." << std::endl;
  }

};

}
}

#endif
/* JavaCC - OriginalChecksum=ca665ddedf5f5b0cb69e76d90eb70fe0 (do not edit this line) */