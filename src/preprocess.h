#pragma once
#include "model_obj.h"

namespace coacd
{

    void SDFManifold(Model &input, Model &output, double scale = 50.0f, double level_set = 0.55f);
    bool IsManifold(Model &input);
}
