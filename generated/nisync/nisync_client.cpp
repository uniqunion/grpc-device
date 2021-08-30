
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-SYNC.
//---------------------------------------------------------------------
#include "nisync_client.h"

#include <grpcpp/grpcpp.h>

#include <nisync.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nisync_grpc::experimental::client {

InitResponse
init(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device)
{
  ::grpc::ClientContext context;

  auto request = InitRequest{};
  request.set_resource_name(resource_name);
  request.set_id_query(id_query);
  request.set_reset_device(reset_device);

  auto response = InitResponse{};

  raise_if_error(
      stub->Init(&context, request, &response));

  return response;
}

CloseResponse
close(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CloseRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CloseResponse{};

  raise_if_error(
      stub->Close(&context, request, &response));

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
      stub->ErrorMessage(&context, request, &response));

  return response;
}

ResetResponse
reset(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ResetRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ResetResponse{};

  raise_if_error(
      stub->Reset(&context, request, &response));

  return response;
}

PersistConfigResponse
persist_config(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = PersistConfigRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = PersistConfigResponse{};

  raise_if_error(
      stub->PersistConfig(&context, request, &response));

  return response;
}

SelfTestResponse
self_test(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = SelfTestRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = SelfTestResponse{};

  raise_if_error(
      stub->SelfTest(&context, request, &response));

  return response;
}

RevisionQueryResponse
revision_query(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = RevisionQueryRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = RevisionQueryResponse{};

  raise_if_error(
      stub->RevisionQuery(&context, request, &response));

  return response;
}

ConnectTrigTerminalsResponse
connect_trig_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal, const pb::string& sync_clock, const pb::int32& invert, const pb::int32& update_edge)
{
  ::grpc::ClientContext context;

  auto request = ConnectTrigTerminalsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_dest_terminal(dest_terminal);
  request.set_sync_clock(sync_clock);
  request.set_invert(invert);
  request.set_update_edge(update_edge);

  auto response = ConnectTrigTerminalsResponse{};

  raise_if_error(
      stub->ConnectTrigTerminals(&context, request, &response));

  return response;
}

DisconnectTrigTerminalsResponse
disconnect_trig_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal)
{
  ::grpc::ClientContext context;

  auto request = DisconnectTrigTerminalsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_dest_terminal(dest_terminal);

  auto response = DisconnectTrigTerminalsResponse{};

  raise_if_error(
      stub->DisconnectTrigTerminals(&context, request, &response));

  return response;
}

ConnectSWTrigToTerminalResponse
connect_sw_trig_to_terminal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal, const pb::string& sync_clock, const pb::int32& invert, const pb::int32& update_edge, const double& delay)
{
  ::grpc::ClientContext context;

  auto request = ConnectSWTrigToTerminalRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_dest_terminal(dest_terminal);
  request.set_sync_clock(sync_clock);
  request.set_invert(invert);
  request.set_update_edge(update_edge);
  request.set_delay(delay);

  auto response = ConnectSWTrigToTerminalResponse{};

  raise_if_error(
      stub->ConnectSWTrigToTerminal(&context, request, &response));

  return response;
}

DisconnectSWTrigFromTerminalResponse
disconnect_sw_trig_from_terminal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal)
{
  ::grpc::ClientContext context;

  auto request = DisconnectSWTrigFromTerminalRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_dest_terminal(dest_terminal);

  auto response = DisconnectSWTrigFromTerminalResponse{};

  raise_if_error(
      stub->DisconnectSWTrigFromTerminal(&context, request, &response));

  return response;
}

SendSoftwareTriggerResponse
send_software_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal)
{
  ::grpc::ClientContext context;

  auto request = SendSoftwareTriggerRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);

  auto response = SendSoftwareTriggerResponse{};

  raise_if_error(
      stub->SendSoftwareTrigger(&context, request, &response));

  return response;
}

ConnectClkTerminalsResponse
connect_clk_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal)
{
  ::grpc::ClientContext context;

  auto request = ConnectClkTerminalsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_dest_terminal(dest_terminal);

  auto response = ConnectClkTerminalsResponse{};

  raise_if_error(
      stub->ConnectClkTerminals(&context, request, &response));

  return response;
}

DisconnectClkTerminalsResponse
disconnect_clk_terminals(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const pb::string& dest_terminal)
{
  ::grpc::ClientContext context;

  auto request = DisconnectClkTerminalsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_dest_terminal(dest_terminal);

  auto response = DisconnectClkTerminalsResponse{};

  raise_if_error(
      stub->DisconnectClkTerminals(&context, request, &response));

  return response;
}

MeasureFrequencyResponse
measure_frequency(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const double& duration)
{
  ::grpc::ClientContext context;

  auto request = MeasureFrequencyRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_duration(duration);

  auto response = MeasureFrequencyResponse{};

  raise_if_error(
      stub->MeasureFrequency(&context, request, &response));

  return response;
}

MeasureFrequencyExResponse
measure_frequency_ex(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& src_terminal, const double& duration, const pb::uint32& decimation_count)
{
  ::grpc::ClientContext context;

  auto request = MeasureFrequencyExRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_src_terminal(src_terminal);
  request.set_duration(duration);
  request.set_decimation_count(decimation_count);

  auto response = MeasureFrequencyExResponse{};

  raise_if_error(
      stub->MeasureFrequencyEx(&context, request, &response));

  return response;
}

Start1588Response
start1588(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = Start1588Request{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = Start1588Response{};

  raise_if_error(
      stub->Start1588(&context, request, &response));

  return response;
}

Stop1588Response
stop1588(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = Stop1588Request{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = Stop1588Response{};

  raise_if_error(
      stub->Stop1588(&context, request, &response));

  return response;
}

Start8021ASResponse
start8021_as(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = Start8021ASRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = Start8021ASResponse{};

  raise_if_error(
      stub->Start8021AS(&context, request, &response));

  return response;
}

Stop8021ASResponse
stop8021_as(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = Stop8021ASRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = Stop8021ASResponse{};

  raise_if_error(
      stub->Stop8021AS(&context, request, &response));

  return response;
}

SetTimeResponse
set_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& time_source, const pb::uint32& time_seconds, const pb::uint32& time_nanoseconds, const pb::uint32& time_fractional_nanoseconds)
{
  ::grpc::ClientContext context;

  auto request = SetTimeRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_time_source(time_source);
  request.set_time_seconds(time_seconds);
  request.set_time_nanoseconds(time_nanoseconds);
  request.set_time_fractional_nanoseconds(time_fractional_nanoseconds);

  auto response = SetTimeResponse{};

  raise_if_error(
      stub->SetTime(&context, request, &response));

  return response;
}

GetTimeResponse
get_time(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetTimeRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetTimeResponse{};

  raise_if_error(
      stub->GetTime(&context, request, &response));

  return response;
}

ResetFrequencyResponse
reset_frequency(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ResetFrequencyRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ResetFrequencyResponse{};

  raise_if_error(
      stub->ResetFrequency(&context, request, &response));

  return response;
}

CreateFutureTimeEventResponse
create_future_time_event(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::int32& output_level, const pb::uint32& time_seconds, const pb::uint32& time_nanoseconds, const pb::uint32& time_fractional_nanoseconds)
{
  ::grpc::ClientContext context;

  auto request = CreateFutureTimeEventRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);
  request.set_output_level(output_level);
  request.set_time_seconds(time_seconds);
  request.set_time_nanoseconds(time_nanoseconds);
  request.set_time_fractional_nanoseconds(time_fractional_nanoseconds);

  auto response = CreateFutureTimeEventResponse{};

  raise_if_error(
      stub->CreateFutureTimeEvent(&context, request, &response));

  return response;
}

ClearFutureTimeEventsResponse
clear_future_time_events(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal)
{
  ::grpc::ClientContext context;

  auto request = ClearFutureTimeEventsRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);

  auto response = ClearFutureTimeEventsResponse{};

  raise_if_error(
      stub->ClearFutureTimeEvents(&context, request, &response));

  return response;
}

EnableTimeStampTriggerResponse
enable_time_stamp_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::int32& active_edge)
{
  ::grpc::ClientContext context;

  auto request = EnableTimeStampTriggerRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);
  request.set_active_edge(active_edge);

  auto response = EnableTimeStampTriggerResponse{};

  raise_if_error(
      stub->EnableTimeStampTrigger(&context, request, &response));

  return response;
}

EnableTimeStampTriggerWithDecimationResponse
enable_time_stamp_trigger_with_decimation(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::int32& active_edge, const pb::uint32& decimation_count)
{
  ::grpc::ClientContext context;

  auto request = EnableTimeStampTriggerWithDecimationRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);
  request.set_active_edge(active_edge);
  request.set_decimation_count(decimation_count);

  auto response = EnableTimeStampTriggerWithDecimationResponse{};

  raise_if_error(
      stub->EnableTimeStampTriggerWithDecimation(&context, request, &response));

  return response;
}

ReadTriggerTimeStampResponse
read_trigger_time_stamp(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const double& timeout)
{
  ::grpc::ClientContext context;

  auto request = ReadTriggerTimeStampRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);
  request.set_timeout(timeout);

  auto response = ReadTriggerTimeStampResponse{};

  raise_if_error(
      stub->ReadTriggerTimeStamp(&context, request, &response));

  return response;
}

ReadMultipleTriggerTimeStampResponse
read_multiple_trigger_time_stamp(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::uint32& timestamps_to_read, const double& timeout)
{
  ::grpc::ClientContext context;

  auto request = ReadMultipleTriggerTimeStampRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);
  request.set_timestamps_to_read(timestamps_to_read);
  request.set_timeout(timeout);

  auto response = ReadMultipleTriggerTimeStampResponse{};

  raise_if_error(
      stub->ReadMultipleTriggerTimeStamp(&context, request, &response));

  return response;
}

DisableTimeStampTriggerResponse
disable_time_stamp_trigger(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal)
{
  ::grpc::ClientContext context;

  auto request = DisableTimeStampTriggerRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);

  auto response = DisableTimeStampTriggerResponse{};

  raise_if_error(
      stub->DisableTimeStampTrigger(&context, request, &response));

  return response;
}

CreateClockResponse
create_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal, const pb::uint32& high_ticks, const pb::uint32& low_ticks, const pb::uint32& start_time_seconds, const pb::uint32& start_time_nanoseconds, const pb::uint32& start_time_fractional_nanoseconds, const pb::uint32& stop_time_seconds, const pb::uint32& stop_time_nanoseconds, const pb::uint32& stop_time_fractional_nanoseconds)
{
  ::grpc::ClientContext context;

  auto request = CreateClockRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);
  request.set_high_ticks(high_ticks);
  request.set_low_ticks(low_ticks);
  request.set_start_time_seconds(start_time_seconds);
  request.set_start_time_nanoseconds(start_time_nanoseconds);
  request.set_start_time_fractional_nanoseconds(start_time_fractional_nanoseconds);
  request.set_stop_time_seconds(stop_time_seconds);
  request.set_stop_time_nanoseconds(stop_time_nanoseconds);
  request.set_stop_time_fractional_nanoseconds(stop_time_fractional_nanoseconds);

  auto response = CreateClockResponse{};

  raise_if_error(
      stub->CreateClock(&context, request, &response));

  return response;
}

ClearClockResponse
clear_clock(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal)
{
  ::grpc::ClientContext context;

  auto request = ClearClockRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);

  auto response = ClearClockResponse{};

  raise_if_error(
      stub->ClearClock(&context, request, &response));

  return response;
}

SetTimeReferenceFreeRunningResponse
set_time_reference_free_running(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = SetTimeReferenceFreeRunningRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = SetTimeReferenceFreeRunningResponse{};

  raise_if_error(
      stub->SetTimeReferenceFreeRunning(&context, request, &response));

  return response;
}

SetTimeReferenceGPSResponse
set_time_reference_gps(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = SetTimeReferenceGPSRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = SetTimeReferenceGPSResponse{};

  raise_if_error(
      stub->SetTimeReferenceGPS(&context, request, &response));

  return response;
}

SetTimeReferenceIRIGResponse
set_time_reference_irig(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& irig_type, const pb::string& terminal_name)
{
  ::grpc::ClientContext context;

  auto request = SetTimeReferenceIRIGRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_irig_type(irig_type);
  request.set_terminal_name(terminal_name);

  auto response = SetTimeReferenceIRIGResponse{};

  raise_if_error(
      stub->SetTimeReferenceIRIG(&context, request, &response));

  return response;
}

SetTimeReferencePPSResponse
set_time_reference_pps(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal_name, const bool& use_manual_time, const pb::uint32& initial_time_seconds, const pb::uint32& initial_time_nanoseconds, const pb::uint32& initial_time_fractional_nanoseconds)
{
  ::grpc::ClientContext context;

  auto request = SetTimeReferencePPSRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal_name(terminal_name);
  request.set_use_manual_time(use_manual_time);
  request.set_initial_time_seconds(initial_time_seconds);
  request.set_initial_time_nanoseconds(initial_time_nanoseconds);
  request.set_initial_time_fractional_nanoseconds(initial_time_fractional_nanoseconds);

  auto response = SetTimeReferencePPSResponse{};

  raise_if_error(
      stub->SetTimeReferencePPS(&context, request, &response));

  return response;
}

SetTimeReference1588OrdinaryClockResponse
set_time_reference1588_ordinary_clock(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = SetTimeReference1588OrdinaryClockRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = SetTimeReference1588OrdinaryClockResponse{};

  raise_if_error(
      stub->SetTimeReference1588OrdinaryClock(&context, request, &response));

  return response;
}

SetTimeReference8021ASResponse
set_time_reference8021_as(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = SetTimeReference8021ASRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = SetTimeReference8021ASResponse{};

  raise_if_error(
      stub->SetTimeReference8021AS(&context, request, &response));

  return response;
}

EnableGPSTimestampingResponse
enable_gps_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = EnableGPSTimestampingRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = EnableGPSTimestampingResponse{};

  raise_if_error(
      stub->EnableGPSTimestamping(&context, request, &response));

  return response;
}

EnableIRIGTimestampingResponse
enable_irig_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& irig_type, const pb::string& terminal_name)
{
  ::grpc::ClientContext context;

  auto request = EnableIRIGTimestampingRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_irig_type(irig_type);
  request.set_terminal_name(terminal_name);

  auto response = EnableIRIGTimestampingResponse{};

  raise_if_error(
      stub->EnableIRIGTimestamping(&context, request, &response));

  return response;
}

ReadLastGPSTimestampResponse
read_last_gps_timestamp(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ReadLastGPSTimestampRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ReadLastGPSTimestampResponse{};

  raise_if_error(
      stub->ReadLastGPSTimestamp(&context, request, &response));

  return response;
}

ReadLastIRIGTimestampResponse
read_last_irig_timestamp(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal)
{
  ::grpc::ClientContext context;

  auto request = ReadLastIRIGTimestampRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal(terminal);

  auto response = ReadLastIRIGTimestampResponse{};

  raise_if_error(
      stub->ReadLastIRIGTimestamp(&context, request, &response));

  return response;
}

DisableGPSTimestampingResponse
disable_gps_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = DisableGPSTimestampingRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = DisableGPSTimestampingResponse{};

  raise_if_error(
      stub->DisableGPSTimestamping(&context, request, &response));

  return response;
}

DisableIRIGTimestampingResponse
disable_irig_timestamping(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& terminal_name)
{
  ::grpc::ClientContext context;

  auto request = DisableIRIGTimestampingRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_terminal_name(terminal_name);

  auto response = DisableIRIGTimestampingResponse{};

  raise_if_error(
      stub->DisableIRIGTimestamping(&context, request, &response));

  return response;
}

GetVelocityResponse
get_velocity(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetVelocityRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetVelocityResponse{};

  raise_if_error(
      stub->GetVelocity(&context, request, &response));

  return response;
}

GetLocationResponse
get_location(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetLocationRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetLocationResponse{};

  raise_if_error(
      stub->GetLocation(&context, request, &response));

  return response;
}

GetTimeReferenceNamesResponse
get_time_reference_names(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetTimeReferenceNamesRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetTimeReferenceNamesResponse{};

  raise_if_error(
      stub->GetTimeReferenceNames(&context, request, &response));

  return response;
}

GetAttributeViInt32Response
get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViInt32Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);

  auto response = GetAttributeViInt32Response{};

  raise_if_error(
      stub->GetAttributeViInt32(&context, request, &response));

  return response;
}

GetAttributeViReal64Response
get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViReal64Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);

  auto response = GetAttributeViReal64Response{};

  raise_if_error(
      stub->GetAttributeViReal64(&context, request, &response));

  return response;
}

GetAttributeViBooleanResponse
get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViBooleanRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);

  auto response = GetAttributeViBooleanResponse{};

  raise_if_error(
      stub->GetAttributeViBoolean(&context, request, &response));

  return response;
}

GetAttributeViStringResponse
get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute)
{
  ::grpc::ClientContext context;

  auto request = GetAttributeViStringRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);

  auto response = GetAttributeViStringResponse{};

  raise_if_error(
      stub->GetAttributeViString(&context, request, &response));

  return response;
}

SetAttributeViInt32Response
set_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute, const pb::int32& value_raw)
{
  ::grpc::ClientContext context;

  auto request = SetAttributeViInt32Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);
  request.set_value_raw(value_raw);

  auto response = SetAttributeViInt32Response{};

  raise_if_error(
      stub->SetAttributeViInt32(&context, request, &response));

  return response;
}

SetAttributeViReal64Response
set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute, const double& value_raw)
{
  ::grpc::ClientContext context;

  auto request = SetAttributeViReal64Request{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);
  request.set_value_raw(value_raw);

  auto response = SetAttributeViReal64Response{};

  raise_if_error(
      stub->SetAttributeViReal64(&context, request, &response));

  return response;
}

SetAttributeViBooleanResponse
set_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute, const bool& value)
{
  ::grpc::ClientContext context;

  auto request = SetAttributeViBooleanRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);
  request.set_value(value);

  auto response = SetAttributeViBooleanResponse{};

  raise_if_error(
      stub->SetAttributeViBoolean(&context, request, &response));

  return response;
}

SetAttributeViStringResponse
set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& active_item, const NiSyncAttributes& attribute, const pb::string& value_raw)
{
  ::grpc::ClientContext context;

  auto request = SetAttributeViStringRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_active_item(active_item);
  request.set_attribute(attribute);
  request.set_value_raw(value_raw);

  auto response = SetAttributeViStringResponse{};

  raise_if_error(
      stub->SetAttributeViString(&context, request, &response));

  return response;
}

GetExtCalLastDateAndTimeResponse
get_ext_cal_last_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetExtCalLastDateAndTimeRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetExtCalLastDateAndTimeResponse{};

  raise_if_error(
      stub->GetExtCalLastDateAndTime(&context, request, &response));

  return response;
}

GetExtCalLastTempResponse
get_ext_cal_last_temp(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetExtCalLastTempRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetExtCalLastTempResponse{};

  raise_if_error(
      stub->GetExtCalLastTemp(&context, request, &response));

  return response;
}

GetExtCalRecommendedIntervalResponse
get_ext_cal_recommended_interval(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = GetExtCalRecommendedIntervalRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = GetExtCalRecommendedIntervalResponse{};

  raise_if_error(
      stub->GetExtCalRecommendedInterval(&context, request, &response));

  return response;
}

ChangeExtCalPasswordResponse
change_ext_cal_password(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& old_password, const pb::string& new_password)
{
  ::grpc::ClientContext context;

  auto request = ChangeExtCalPasswordRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_old_password(old_password);
  request.set_new_password(new_password);

  auto response = ChangeExtCalPasswordResponse{};

  raise_if_error(
      stub->ChangeExtCalPassword(&context, request, &response));

  return response;
}

ReadCurrentTemperatureResponse
read_current_temperature(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = ReadCurrentTemperatureRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = ReadCurrentTemperatureResponse{};

  raise_if_error(
      stub->ReadCurrentTemperature(&context, request, &response));

  return response;
}

CalGetOscillatorVoltageResponse
cal_get_oscillator_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CalGetOscillatorVoltageRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CalGetOscillatorVoltageResponse{};

  raise_if_error(
      stub->CalGetOscillatorVoltage(&context, request, &response));

  return response;
}

CalGetClk10PhaseVoltageResponse
cal_get_clk10_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CalGetClk10PhaseVoltageRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CalGetClk10PhaseVoltageResponse{};

  raise_if_error(
      stub->CalGetClk10PhaseVoltage(&context, request, &response));

  return response;
}

CalGetDDSStartPulsePhaseVoltageResponse
cal_get_dds_start_pulse_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CalGetDDSStartPulsePhaseVoltageRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CalGetDDSStartPulsePhaseVoltageResponse{};

  raise_if_error(
      stub->CalGetDDSStartPulsePhaseVoltage(&context, request, &response));

  return response;
}

CalGetDDSInitialPhaseResponse
cal_get_dds_initial_phase(const StubPtr& stub, const nidevice_grpc::Session& vi)
{
  ::grpc::ClientContext context;

  auto request = CalGetDDSInitialPhaseRequest{};
  request.mutable_vi()->CopyFrom(vi);

  auto response = CalGetDDSInitialPhaseResponse{};

  raise_if_error(
      stub->CalGetDDSInitialPhase(&context, request, &response));

  return response;
}

InitExtCalResponse
init_ext_cal(const StubPtr& stub, const pb::string& resource_name, const pb::string& password)
{
  ::grpc::ClientContext context;

  auto request = InitExtCalRequest{};
  request.set_resource_name(resource_name);
  request.set_password(password);

  auto response = InitExtCalResponse{};

  raise_if_error(
      stub->InitExtCal(&context, request, &response));

  return response;
}

CloseExtCalResponse
close_ext_cal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& action)
{
  ::grpc::ClientContext context;

  auto request = CloseExtCalRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_action(action);

  auto response = CloseExtCalResponse{};

  raise_if_error(
      stub->CloseExtCal(&context, request, &response));

  return response;
}

CalAdjustOscillatorVoltageResponse
cal_adjust_oscillator_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_voltage)
{
  ::grpc::ClientContext context;

  auto request = CalAdjustOscillatorVoltageRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_measured_voltage(measured_voltage);

  auto response = CalAdjustOscillatorVoltageResponse{};

  raise_if_error(
      stub->CalAdjustOscillatorVoltage(&context, request, &response));

  return response;
}

CalAdjustClk10PhaseVoltageResponse
cal_adjust_clk10_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_voltage)
{
  ::grpc::ClientContext context;

  auto request = CalAdjustClk10PhaseVoltageRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_measured_voltage(measured_voltage);

  auto response = CalAdjustClk10PhaseVoltageResponse{};

  raise_if_error(
      stub->CalAdjustClk10PhaseVoltage(&context, request, &response));

  return response;
}

CalAdjustDDSStartPulsePhaseVoltageResponse
cal_adjust_dds_start_pulse_phase_voltage(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_voltage)
{
  ::grpc::ClientContext context;

  auto request = CalAdjustDDSStartPulsePhaseVoltageRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_measured_voltage(measured_voltage);

  auto response = CalAdjustDDSStartPulsePhaseVoltageResponse{};

  raise_if_error(
      stub->CalAdjustDDSStartPulsePhaseVoltage(&context, request, &response));

  return response;
}

CalAdjustDDSInitialPhaseResponse
cal_adjust_dds_initial_phase(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& measured_phase)
{
  ::grpc::ClientContext context;

  auto request = CalAdjustDDSInitialPhaseRequest{};
  request.mutable_vi()->CopyFrom(vi);
  request.set_measured_phase(measured_phase);

  auto response = CalAdjustDDSInitialPhaseResponse{};

  raise_if_error(
      stub->CalAdjustDDSInitialPhase(&context, request, &response));

  return response;
}


} // namespace nisync_grpc::experimental::client
