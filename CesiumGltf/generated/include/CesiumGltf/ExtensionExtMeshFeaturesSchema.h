// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensionExtMeshFeaturesClass.h"
#include "CesiumGltf/ExtensionExtMeshFeaturesEnum.h"
#include "CesiumGltf/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <optional>
#include <string>
#include <unordered_map>

namespace CesiumGltf {
/**
 * @brief An object defining classes and enums.
 */
struct CESIUMGLTF_API ExtensionExtMeshFeaturesSchema final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName =
      "ExtensionExtMeshFeaturesSchema";

  /**
   * @brief Unique identifier for the schema.
   */
  std::optional<std::string> id;

  /**
   * @brief The name of the schema, e.g. for display purposes.
   */
  std::optional<std::string> name;

  /**
   * @brief The description of the schema.
   */
  std::optional<std::string> description;

  /**
   * @brief Application-specific version of the schema.
   */
  std::optional<std::string> version;

  /**
   * @brief A dictionary, where each key is a class ID and each value is an
   * object defining the class. Class IDs may contain only alphanumeric and
   * underscore characters.
   */
  std::unordered_map<std::string, CesiumGltf::ExtensionExtMeshFeaturesClass>
      classes;

  /**
   * @brief A dictionary, where each key is an enum ID and each value is an
   * object defining the values for the enum. Enum IDs may contain only
   * alphanumeric and underscore characters.
   */
  std::unordered_map<std::string, CesiumGltf::ExtensionExtMeshFeaturesEnum>
      enums;
};
} // namespace CesiumGltf
