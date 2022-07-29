#pragma once

#include "MultiDataCommand.h"

class RealTimeRunDataCommand : public MultiDataCommand {
public:
    RealTimeRunDataCommand(uint64_t target_address = 0, uint64_t router_address = 0, time_t time = 0);

    RequestType getRequestType() { return RequestType::Stats; };
};