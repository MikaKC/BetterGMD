#pragma once
#include "includes.h"

class MenuLayerHook : public gd::MenuLayer
{
public:
    static bool init(gd::MenuLayer* self);
    static void LoadHooks();
};