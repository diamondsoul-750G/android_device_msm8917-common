#include <cutils/native_handle.h>
#include <CameraDeviceSession.h>

namespace android {
namespace hardware {
namespace camera {
namespace device {
namespace V3_2 {
namespace implementation {

uint64_t CameraDeviceSession::getCapResultBufferId(const buffer_handle_t&, int) {
  // No need to fill in bufferId by default
  return BUFFER_ID_NO_BUFFER;
}

}  // namespace implementation
}  // namespace V3_2
}  // namespace device
}  // namespace camera
}  // namespace hardware
}  // namespace android
