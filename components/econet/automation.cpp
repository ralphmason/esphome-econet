#include "esphome/core/log.h"

#include "automation.h"

static const char *const TAG = "econet.automation";

namespace esphome {
namespace econet {

EconetRawDatapointUpdateTrigger::EconetRawDatapointUpdateTrigger(Econet *parent, const std::string &sensor_id) {
  parent->register_listener(sensor_id, [this](const EconetDatapoint &dp) { this->trigger(dp.value_raw); });
}

}  // namespace econet
}  // namespace esphome
