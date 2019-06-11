#ifndef _SOURCE_HPP
#define _SOURCE_HPP
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <map>
#include <stack>
#include <utility>
#include <climits>
#define YYSTYPE Type*

using namespace std;

const int UNDEFINED = INT_MAX;


struct Type { // INT, VOID, DOUBLE etc.
    string type;

    /** HW5 fields **/
    int reg;
    string label;
    vector<int> next_list;
    vector<int> true_list;
    vector<int> false_list;
    vector<int> break_list;
    vector<int> continue_list;

    Type() {}
    Type(string type) : type(type) {}
    virtual ~Type() {}
};


struct NameTypeInfo : public Type{ // ID, "X"
    string type;
    string name;

    NameTypeInfo(string type, string name) : type(type), name(name) {}
};

struct MultiNameTypeInfo : public Type { // list of token names
    string type;
    vector<string> names;

    MultiNameTypeInfo(string type, vector<string> names) : type(type), names(names) {}
};

struct NameMultiTypeInfo : public Type {
    vector<string> types;
    vector<int> places; // added for HW5

    NameMultiTypeInfo(string type, int place) {types.push_back(type); places.push_back(place);}
    NameMultiTypeInfo(string type) {types.push_back(type);}
    NameMultiTypeInfo(vector<string> types) : types(types) {}
    NameMultiTypeInfo(vector<string> types, vector<int> places) : types(types), places(places) {}
};

struct MultiNameMultiTypeInfo : public Type{ //list of token types and names
    vector<pair<string, string> > types_names;

    MultiNameMultiTypeInfo() {}
    MultiNameMultiTypeInfo(vector<pair<string, string> > types_names) : types_names(types_names) {}
};

struct FuncInfo : public Type {
    string name;
    string retType;
    vector<pair<string, string> > types_names;
    int preconditionsNum;

    FuncInfo(string name, string retType,vector<pair<string, string> > types_names) : name(name), retType(retType), types_names(types_names),preconditionsNum(0) {}
};

struct SymbolTableEntry {
    string type; //for id - type; for function - return type
    string name;
    int offset; //for id - offset; for function - precondition
    vector<pair<string, string> > args; //only for functions
    bool isFunc;

    SymbolTableEntry(string type, string name, int offset) : type(type), name(name), offset(offset), args(), isFunc(false) {}

    /*
    SymbolTableEntry(string retType, string name, int offset, vector<pair<string, string> > args) : type(retType), name(name), offset(offset), args(args) {} //for function implementation
    */

    SymbolTableEntry(string retType, string name, vector<pair<string, string> > args) : type(retType), name(name), offset(UNDEFINED), args(args), isFunc(true) {} //for function declaration only

    ~SymbolTableEntry();
};


typedef vector<SymbolTableEntry*> SymbolTable;

#endif