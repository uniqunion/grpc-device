
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-rfmxpulse.
//---------------------------------------------------------------------
#include "nirfmxpulse_client.h"

#include <grpcpp/grpcpp.h>

#include <nirfmxpulse.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nirfmxpulse_grpc::experimental::client {

CloseResponse
close(const StubPtr& stub, const nidevice_grpc::Session& instrument, const bool& force_destroy)
{
  ::grpc::ClientContext context;

  auto request = CloseRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_force_destroy(force_destroy);

  auto response = CloseResponse{};

  raise_if_error(
      stub->Close(&context, request, &response),
      context);

  return response;
}

GetErrorResponse
get_error(const StubPtr& stub, const nidevice_grpc::Session& instrument)
{
  ::grpc::ClientContext context;

  auto request = GetErrorRequest{};
  request.mutable_instrument()->CopyFrom(instrument);

  auto response = GetErrorResponse{};

  raise_if_error(
      stub->GetError(&context, request, &response),
      context);

  return response;
}

GetErrorStringResponse
get_error_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& error_code)
{
  ::grpc::ClientContext context;

  auto request = GetErrorStringRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_error_code(error_code);

  auto response = GetErrorStringResponse{};

  raise_if_error(
      stub->GetErrorString(&context, request, &response),
      context);

  return response;
}

InitializeResponse
initialize(const StubPtr& stub, const std::string& resource_name, const std::string& option_string)
{
  ::grpc::ClientContext context;

  auto request = InitializeRequest{};
  request.set_resource_name(resource_name);
  request.set_option_string(option_string);

  auto response = InitializeResponse{};

  raise_if_error(
      stub->Initialize(&context, request, &response),
      context);

  return response;
}


} // namespace nirfmxpulse_grpc::experimental::client
