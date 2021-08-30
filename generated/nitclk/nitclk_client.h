
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-TClk.
//---------------------------------------------------------------------
#ifndef NITCLK_GRPC_CLIENT_H
#define NITCLK_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nitclk.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nitclk_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiTClk::Stub>;
using namespace nidevice_grpc::experimental::client;


ConfigureForHomogeneousTriggersResponse configure_for_homogeneous_triggers(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions);
FinishSyncPulseSenderSynchronizeResponse finish_sync_pulse_sender_synchronize(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions, const double& min_time);
GetAttributeViReal64Response get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::string& channel_name, const NiTClkAttributes& attribute_id);
GetAttributeViSessionResponse get_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::string& channel_name, const NiTClkAttributes& attribute_id);
GetAttributeViStringResponse get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::string& channel_name, const NiTClkAttributes& attribute_id);
GetExtendedErrorInfoResponse get_extended_error_info(const StubPtr& stub);
InitiateResponse initiate(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions);
IsDoneResponse is_done(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions);
SetAttributeViReal64Response set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::string& channel_name, const NiTClkAttributes& attribute_id, const double& value_raw);
SetAttributeViSessionResponse set_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::string& channel_name, const NiTClkAttributes& attribute_id, const nidevice_grpc::Session& value);
SetAttributeViStringResponse set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& session, const pb::string& channel_name, const NiTClkAttributes& attribute_id, const pb::string& value_raw);
SetupForSyncPulseSenderSynchronizeResponse setup_for_sync_pulse_sender_synchronize(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions, const double& min_time);
SynchronizeResponse synchronize(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions, const double& min_tclk_period);
SynchronizeToSyncPulseSenderResponse synchronize_to_sync_pulse_sender(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions, const double& min_time);
WaitUntilDoneResponse wait_until_done(const StubPtr& stub, const std::vector<nidevice_grpc::Session>& sessions, const double& timeout);

} // namespace nitclk_grpc::experimental::client

#endif /* NITCLK_GRPC_CLIENT_H */
