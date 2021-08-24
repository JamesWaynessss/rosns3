// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NEIGHBORHOODS_H_
#define FLATBUFFERS_GENERATED_NEIGHBORHOODS_H_

#include "flatbuffers/flatbuffers.h"

struct Neighborhood;
struct NeighborhoodBuilder;

struct Neighborhoods;
struct NeighborhoodsBuilder;

struct Neighborhood FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NeighborhoodBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NEIGHBORS = 6
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::Vector<int32_t> *neighbors() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_NEIGHBORS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_NEIGHBORS) &&
           verifier.VerifyVector(neighbors()) &&
           verifier.EndTable();
  }
};

struct NeighborhoodBuilder {
  typedef Neighborhood Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(Neighborhood::VT_ID, id, 0);
  }
  void add_neighbors(flatbuffers::Offset<flatbuffers::Vector<int32_t>> neighbors) {
    fbb_.AddOffset(Neighborhood::VT_NEIGHBORS, neighbors);
  }
  explicit NeighborhoodBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Neighborhood> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Neighborhood>(end);
    return o;
  }
};

inline flatbuffers::Offset<Neighborhood> CreateNeighborhood(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> neighbors = 0) {
  NeighborhoodBuilder builder_(_fbb);
  builder_.add_neighbors(neighbors);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<Neighborhood> CreateNeighborhoodDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const std::vector<int32_t> *neighbors = nullptr) {
  auto neighbors__ = neighbors ? _fbb.CreateVector<int32_t>(*neighbors) : 0;
  return CreateNeighborhood(
      _fbb,
      id,
      neighbors__);
}

struct Neighborhoods FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NeighborhoodsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NEIGHBORHOOD = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<Neighborhood>> *neighborhood() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Neighborhood>> *>(VT_NEIGHBORHOOD);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NEIGHBORHOOD) &&
           verifier.VerifyVector(neighborhood()) &&
           verifier.VerifyVectorOfTables(neighborhood()) &&
           verifier.EndTable();
  }
};

struct NeighborhoodsBuilder {
  typedef Neighborhoods Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_neighborhood(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Neighborhood>>> neighborhood) {
    fbb_.AddOffset(Neighborhoods::VT_NEIGHBORHOOD, neighborhood);
  }
  explicit NeighborhoodsBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Neighborhoods> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Neighborhoods>(end);
    return o;
  }
};

inline flatbuffers::Offset<Neighborhoods> CreateNeighborhoods(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Neighborhood>>> neighborhood = 0) {
  NeighborhoodsBuilder builder_(_fbb);
  builder_.add_neighborhood(neighborhood);
  return builder_.Finish();
}

inline flatbuffers::Offset<Neighborhoods> CreateNeighborhoodsDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Neighborhood>> *neighborhood = nullptr) {
  auto neighborhood__ = neighborhood ? _fbb.CreateVector<flatbuffers::Offset<Neighborhood>>(*neighborhood) : 0;
  return CreateNeighborhoods(
      _fbb,
      neighborhood__);
}

inline const Neighborhoods *GetNeighborhoods(const void *buf) {
  return flatbuffers::GetRoot<Neighborhoods>(buf);
}

inline const Neighborhoods *GetSizePrefixedNeighborhoods(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Neighborhoods>(buf);
}

inline bool VerifyNeighborhoodsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Neighborhoods>(nullptr);
}

inline bool VerifySizePrefixedNeighborhoodsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Neighborhoods>(nullptr);
}

inline void FinishNeighborhoodsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Neighborhoods> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedNeighborhoodsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Neighborhoods> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_NEIGHBORHOODS_H_