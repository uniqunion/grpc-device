<%
import common_helpers
import client_helpers
import service_helpers
from client_helpers import ParamMechanism

config = data['config']
functions = data['functions']

service_class_prefix = config["service_class_prefix"]
include_guard_name = service_helpers.get_include_guard_name(config, "_CLIENT_H")
core_namespace = config["namespace_component"] + "_grpc"
namespace = f"{core_namespace}::experimental::client"

stub_ptr_alias = client_helpers.stub_ptr_alias()
pb_alias = client_helpers.protobuf_namespace_alias()
%>\
<%namespace name="mako_helper" file="/client_helpers.mako"/>\

//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for ${config["driver_name"]}.
//---------------------------------------------------------------------
#ifndef ${include_guard_name}
#define ${include_guard_name}

#include <grpcpp/grpcpp.h>

#include <${config["module_name"]}.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace ${namespace} {

namespace ${pb_alias} = ::google::protobuf;
using ${stub_ptr_alias} = std::unique_ptr<${service_class_prefix}::Stub>;
using namespace nidevice_grpc::experimental::client;


% for function in common_helpers.filter_proto_rpc_functions(functions):
<%
  f = functions[function]
  stub_method_name = common_helpers.snake_to_pascal(function)
  client_method_name = common_helpers.pascal_to_snake(stub_method_name)
  response_type = service_helpers.get_response_type(stub_method_name)
  stub_param = f"const {stub_ptr_alias}& stub"
  is_streaming = common_helpers.has_streaming_response(f)
%>\
%   if is_streaming:
${client_helpers.streaming_response_type(response_type)} ${client_method_name}(${client_helpers.create_streaming_params(f)});
%   else:
${response_type} ${client_method_name}(${client_helpers.create_unary_params(f)});
%   endif
% endfor

} // namespace ${namespace}

#endif /* ${include_guard_name} */
