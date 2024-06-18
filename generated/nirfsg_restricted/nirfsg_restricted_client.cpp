
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFSG-RESTRICTED.
//---------------------------------------------------------------------
#include "nirfsg_restricted_client.h"

#include <grpcpp/grpcpp.h>

#include <nirfsg_restricted.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nirfsg_restricted_grpc::experimental::client {

GetErrorResponse
get_error(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetErrorRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetErrorResponse{};

  raise_if_error(
      stub->GetError(&context, request, &response),
      context);

  return response;
}

ErrorMessageResponse
error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code)
{
  ::grpc::ClientContext context;

  auto request = ErrorMessageRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_error_code(error_code);

  auto response = ErrorMessageResponse{};

  raise_if_error(
      stub->ErrorMessage(&context, request, &response),
      context);

  return response;
}

CreateDeembeddingSparameterTableResponse
create_deembedding_sparameter_table(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& port, const std::string& table_name, const pb::int32& number_of_frequencies, const pb::int32& number_of_ports)
{
  ::grpc::ClientContext context;

  auto request = CreateDeembeddingSparameterTableRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_port(port);
  request.set_table_name(table_name);
  request.set_number_of_frequencies(number_of_frequencies);
  request.set_number_of_ports(number_of_ports);

  auto response = CreateDeembeddingSparameterTableResponse{};

  raise_if_error(
      stub->CreateDeembeddingSparameterTable(&context, request, &response),
      context);

  return response;
}

ConfigureSparameterTableFrequenciesResponse
configure_sparameter_table_frequencies(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& port, const std::string& table_name, const std::vector<double>& frequencies)
{
  ::grpc::ClientContext context;

  auto request = ConfigureSparameterTableFrequenciesRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_port(port);
  request.set_table_name(table_name);
  copy_array(frequencies, request.mutable_frequencies());

  auto response = ConfigureSparameterTableFrequenciesResponse{};

  raise_if_error(
      stub->ConfigureSparameterTableFrequencies(&context, request, &response),
      context);

  return response;
}

ConfigureSparameterTableSparametersResponse
configure_sparameter_table_sparameters(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::string& port, const std::string& table_name, const std::vector<nidevice_grpc::NIComplexNumber>& sparameter_table, const simple_variant<SParameterOrientation, pb::int32>& sparameter_orientation)
{
  ::grpc::ClientContext context;

  auto request = ConfigureSparameterTableSparametersRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_port(port);
  request.set_table_name(table_name);
  copy_array(sparameter_table, request.mutable_sparameter_table());
  const auto sparameter_orientation_ptr = sparameter_orientation.get_if<SParameterOrientation>();
  const auto sparameter_orientation_raw_ptr = sparameter_orientation.get_if<pb::int32>();
  if (sparameter_orientation_ptr) {
    request.set_sparameter_orientation(*sparameter_orientation_ptr);
  }
  else if (sparameter_orientation_raw_ptr) {
    request.set_sparameter_orientation_raw(*sparameter_orientation_raw_ptr);
  }

  auto response = ConfigureSparameterTableSparametersResponse{};

  raise_if_error(
      stub->ConfigureSparameterTableSparameters(&context, request, &response),
      context);

  return response;
}


} // namespace nirfsg_restricted_grpc::experimental::client