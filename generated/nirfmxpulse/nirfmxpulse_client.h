
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-rfmxpulse.
//---------------------------------------------------------------------
#ifndef NIRFMXPULSE_GRPC_CLIENT_H
#define NIRFMXPULSE_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nirfmxpulse.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nirfmxpulse_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiRFmxPulse::Stub>;
using namespace nidevice_grpc::experimental::client;


CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& instrument, const bool& force_destroy);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& instrument);
GetErrorStringResponse get_error_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& error_code);
InitializeResponse initialize(const StubPtr& stub, const std::string& resource_name, const std::string& option_string);

} // namespace nirfmxpulse_grpc::experimental::client

#endif /* NIRFMXPULSE_GRPC_CLIENT_H */