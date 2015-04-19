#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t832;
struct t832_marshaled;

void t832_marshal(const t832& unmarshaled, t832_marshaled& marshaled);
void t832_marshal_back(const t832_marshaled& marshaled, t832& unmarshaled);
void t832_marshal_cleanup(t832_marshaled& marshaled);
