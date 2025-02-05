// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/Library.h"
#include "Cesium3DTiles/SubtreeMetadataProperty.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <string>
#include <unordered_map>

namespace Cesium3DTiles {
/**
 * @brief An object assigning tile metadata to implicit tiles in the subtree.
 * Tile metadata only exists for available tiles and is tightly packed by
 * increasing tile index. To access individual tile metadata, implementations
 * may create a mapping from tile indices to tile metadata indices.
 */
struct CESIUM3DTILES_API ExtensionSubtree3dTilesMetadata final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName =
      "ExtensionSubtree3dTilesMetadata";
  static inline constexpr const char* ExtensionName = "3DTILES_metadata";

  /**
   * @brief The class that property values conform to. The value must be a class
   * ID declared in the `classes` dictionary.
   */
  std::string classProperty;

  /**
   * @brief A dictionary, where each key corresponds to a property ID in the
   * class' `properties` dictionary and each value is an object describing where
   * property values are stored. Required properties must be included in this
   * dictionary.
   */
  std::unordered_map<std::string, Cesium3DTiles::SubtreeMetadataProperty>
      properties;
};
} // namespace Cesium3DTiles
