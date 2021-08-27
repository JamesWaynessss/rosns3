// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NETWORKROUTING_H_
#define FLATBUFFERS_GENERATED_NETWORKROUTING_H_

#include "flatbuffers/flatbuffers.h"

struct Entree;
struct EntreeBuilder;

struct NetworkNode;
struct NetworkNodeBuilder;

struct SwarmNetwork;
struct SwarmNetworkBuilder;

struct Entree FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef EntreeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DESTINATION = 4,
    VT_DISTANCE = 6
  };
  int32_t destination() const {
    return GetField<int32_t>(VT_DESTINATION, 0);
  }
  int32_t distance() const {
    return GetField<int32_t>(VT_DISTANCE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_DESTINATION) &&
           VerifyField<int32_t>(verifier, VT_DISTANCE) &&
           verifier.EndTable();
  }
};

struct EntreeBuilder {
  typedef Entree Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_destination(int32_t destination) {
    fbb_.AddElement<int32_t>(Entree::VT_DESTINATION, destination, 0);
  }
  void add_distance(int32_t distance) {
    fbb_.AddElement<int32_t>(Entree::VT_DISTANCE, distance, 0);
  }
  explicit EntreeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Entree> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Entree>(end);
    return o;
  }
};

inline flatbuffers::Offset<Entree> CreateEntree(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t destination = 0,
    int32_t distance = 0) {
  EntreeBuilder builder_(_fbb);
  builder_.add_distance(distance);
  builder_.add_destination(destination);
  return builder_.Finish();
}

struct NetworkNode FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NetworkNodeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODE = 4,
    VT_ROUTINGTABLE = 6
  };
  int32_t node() const {
    return GetField<int32_t>(VT_NODE, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Entree>> *routingtable() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Entree>> *>(VT_ROUTINGTABLE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_NODE) &&
           VerifyOffset(verifier, VT_ROUTINGTABLE) &&
           verifier.VerifyVector(routingtable()) &&
           verifier.VerifyVectorOfTables(routingtable()) &&
           verifier.EndTable();
  }
};

struct NetworkNodeBuilder {
  typedef NetworkNode Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_node(int32_t node) {
    fbb_.AddElement<int32_t>(NetworkNode::VT_NODE, node, 0);
  }
  void add_routingtable(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Entree>>> routingtable) {
    fbb_.AddOffset(NetworkNode::VT_ROUTINGTABLE, routingtable);
  }
  explicit NetworkNodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<NetworkNode> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<NetworkNode>(end);
    return o;
  }
};

inline flatbuffers::Offset<NetworkNode> CreateNetworkNode(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t node = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Entree>>> routingtable = 0) {
  NetworkNodeBuilder builder_(_fbb);
  builder_.add_routingtable(routingtable);
  builder_.add_node(node);
  return builder_.Finish();
}

inline flatbuffers::Offset<NetworkNode> CreateNetworkNodeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t node = 0,
    const std::vector<flatbuffers::Offset<Entree>> *routingtable = nullptr) {
  auto routingtable__ = routingtable ? _fbb.CreateVector<flatbuffers::Offset<Entree>>(*routingtable) : 0;
  return CreateNetworkNode(
      _fbb,
      node,
      routingtable__);
}

struct SwarmNetwork FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef SwarmNetworkBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODES = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<NetworkNode>> *nodes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<NetworkNode>> *>(VT_NODES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODES) &&
           verifier.VerifyVector(nodes()) &&
           verifier.VerifyVectorOfTables(nodes()) &&
           verifier.EndTable();
  }
};

struct SwarmNetworkBuilder {
  typedef SwarmNetwork Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_nodes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NetworkNode>>> nodes) {
    fbb_.AddOffset(SwarmNetwork::VT_NODES, nodes);
  }
  explicit SwarmNetworkBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<SwarmNetwork> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SwarmNetwork>(end);
    return o;
  }
};

inline flatbuffers::Offset<SwarmNetwork> CreateSwarmNetwork(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NetworkNode>>> nodes = 0) {
  SwarmNetworkBuilder builder_(_fbb);
  builder_.add_nodes(nodes);
  return builder_.Finish();
}

inline flatbuffers::Offset<SwarmNetwork> CreateSwarmNetworkDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<NetworkNode>> *nodes = nullptr) {
  auto nodes__ = nodes ? _fbb.CreateVector<flatbuffers::Offset<NetworkNode>>(*nodes) : 0;
  return CreateSwarmNetwork(
      _fbb,
      nodes__);
}

inline const SwarmNetwork *GetSwarmNetwork(const void *buf) {
  return flatbuffers::GetRoot<SwarmNetwork>(buf);
}

inline const SwarmNetwork *GetSizePrefixedSwarmNetwork(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<SwarmNetwork>(buf);
}

inline bool VerifySwarmNetworkBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<SwarmNetwork>(nullptr);
}

inline bool VerifySizePrefixedSwarmNetworkBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<SwarmNetwork>(nullptr);
}

inline void FinishSwarmNetworkBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<SwarmNetwork> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSwarmNetworkBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<SwarmNetwork> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_NETWORKROUTING_H_
