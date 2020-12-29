#pragma once

#include <nodes/NodeDataModel>

using QtNodes::NodeData;
using QtNodes::NodeDataType;

/// The class can potentially incapsulate any user data which
/// need to be transferred within the Node Editor graph
class ExecData : public NodeData
{
public:

  ExecData() {}

  NodeDataType type() const override
  { return NodeDataType {"exec", "Exec"}; }
};
