// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <optional>
#include <string>

namespace Cesium3DTiles {
/**
 * @brief An object containing metadata about a content.
 */
struct CESIUM3DTILES_API ExtensionContent3dTilesMetadata final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName =
      "ExtensionContent3dTilesMetadata";
  static inline constexpr const char* ExtensionName = "3DTILES_metadata";

  /**
   * @brief The group this content belongs to. The value must correspond to a
   * group ID declared in the `groups` dictionary.
   */
  std::optional<std::string> group;
};
} // namespace Cesium3DTiles
