// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <Cesium3DTiles/SubtreeMetadataProperty.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace Cesium3DTilesReader {
class SubtreeMetadataPropertyJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = Cesium3DTiles::SubtreeMetadataProperty;

  SubtreeMetadataPropertyJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      Cesium3DTiles::SubtreeMetadataProperty* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeySubtreeMetadataProperty(
      const std::string& objectType,
      const std::string_view& str,
      Cesium3DTiles::SubtreeMetadataProperty& o);

private:
  Cesium3DTiles::SubtreeMetadataProperty* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _bufferView;
  CesiumJsonReader::StringJsonHandler _arrayOffsetType;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _arrayOffsetBufferView;
  CesiumJsonReader::StringJsonHandler _stringOffsetType;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _stringOffsetBufferView;
};
} // namespace Cesium3DTilesReader
