//
//  TokenizedString.h
//  wordsmash
//
//  Created by Graham Zuber on 3/4/16.
//  Copyright © 2016 zuber.io. All rights reserved.
//

#ifndef TokenizedString_h
#define TokenizedString_h

#include <stdio.h>
#include <iostream>
#include <vector>

class TokenizedString
{
    
public:
    // constructor
    TokenizedString(std::string word);
    
    // public member functions
    std::vector<std::string> get_syllables();
    long get_syllable_count();
    
private:
    // member variables
    const std::string m_sVowels = "aAeEiIoOuUyY";
    std::string m_sWord;
    std::vector<std::string> m_asSylls;
    
    // member functions
    bool is_vowel(char letter);
    std::vector<std::string> tokenize(std::string word);
    
};

#endif /* TokenizedString_h */