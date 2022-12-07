//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-TClk Metadata
//---------------------------------------------------------------------
#include "nitclk_library.h"

#if defined(_MSC_VER)
static const char* kLibraryName = "niTClk_64.dll";
#else
static const char* kLibraryName = "libnitclk.so";
#endif

namespace nitclk_grpc {

NiTClkLibrary::NiTClkLibrary() : shared_library_(kLibraryName)
{
  shared_library_.load();
  bool loaded = shared_library_.is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.ConfigureForHomogeneousTriggers = reinterpret_cast<ConfigureForHomogeneousTriggersPtr>(shared_library_.get_function_pointer("niTClk_ConfigureForHomogeneousTriggers"));
  function_pointers_.FinishSyncPulseSenderSynchronize = reinterpret_cast<FinishSyncPulseSenderSynchronizePtr>(shared_library_.get_function_pointer("niTClk_FinishSyncPulseSenderSynchronize"));
  function_pointers_.GetAttributeViReal64 = reinterpret_cast<GetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niTClk_GetAttributeViReal64"));
  function_pointers_.GetAttributeViSession = reinterpret_cast<GetAttributeViSessionPtr>(shared_library_.get_function_pointer("niTClk_GetAttributeViSession"));
  function_pointers_.GetAttributeViString = reinterpret_cast<GetAttributeViStringPtr>(shared_library_.get_function_pointer("niTClk_GetAttributeViString"));
  function_pointers_.GetExtendedErrorInfo = reinterpret_cast<GetExtendedErrorInfoPtr>(shared_library_.get_function_pointer("niTClk_GetExtendedErrorInfo"));
  function_pointers_.Initiate = reinterpret_cast<InitiatePtr>(shared_library_.get_function_pointer("niTClk_Initiate"));
  function_pointers_.IsDone = reinterpret_cast<IsDonePtr>(shared_library_.get_function_pointer("niTClk_IsDone"));
  function_pointers_.SetAttributeViReal64 = reinterpret_cast<SetAttributeViReal64Ptr>(shared_library_.get_function_pointer("niTClk_SetAttributeViReal64"));
  function_pointers_.SetAttributeViSession = reinterpret_cast<SetAttributeViSessionPtr>(shared_library_.get_function_pointer("niTClk_SetAttributeViSession"));
  function_pointers_.SetAttributeViString = reinterpret_cast<SetAttributeViStringPtr>(shared_library_.get_function_pointer("niTClk_SetAttributeViString"));
  function_pointers_.SetupForSyncPulseSenderSynchronize = reinterpret_cast<SetupForSyncPulseSenderSynchronizePtr>(shared_library_.get_function_pointer("niTClk_SetupForSyncPulseSenderSynchronize"));
  function_pointers_.Synchronize = reinterpret_cast<SynchronizePtr>(shared_library_.get_function_pointer("niTClk_Synchronize"));
  function_pointers_.SynchronizeToSyncPulseSender = reinterpret_cast<SynchronizeToSyncPulseSenderPtr>(shared_library_.get_function_pointer("niTClk_SynchronizeToSyncPulseSender"));
  function_pointers_.WaitUntilDone = reinterpret_cast<WaitUntilDonePtr>(shared_library_.get_function_pointer("niTClk_WaitUntilDone"));
}

NiTClkLibrary::~NiTClkLibrary()
{
}

::grpc::Status NiTClkLibrary::check_function_exists(std::string functionName)
{
  return shared_library_.function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

ViStatus NiTClkLibrary::ConfigureForHomogeneousTriggers(ViUInt32 sessionCount, ViSession sessions[])
{
  if (!function_pointers_.ConfigureForHomogeneousTriggers) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_ConfigureForHomogeneousTriggers.");
  }
  return function_pointers_.ConfigureForHomogeneousTriggers(sessionCount, sessions);
}

ViStatus NiTClkLibrary::FinishSyncPulseSenderSynchronize(ViUInt32 sessionCount, ViSession sessions[], ViReal64 minTime)
{
  if (!function_pointers_.FinishSyncPulseSenderSynchronize) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_FinishSyncPulseSenderSynchronize.");
  }
  return function_pointers_.FinishSyncPulseSenderSynchronize(sessionCount, sessions, minTime);
}

ViStatus NiTClkLibrary::GetAttributeViReal64(ViSession session, ViConstString channelName, ViAttr attributeId, ViReal64* value)
{
  if (!function_pointers_.GetAttributeViReal64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_GetAttributeViReal64.");
  }
  return function_pointers_.GetAttributeViReal64(session, channelName, attributeId, value);
}

ViStatus NiTClkLibrary::GetAttributeViSession(ViSession session, ViConstString channelName, ViAttr attributeId, ViSession* value)
{
  if (!function_pointers_.GetAttributeViSession) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_GetAttributeViSession.");
  }
  return function_pointers_.GetAttributeViSession(session, channelName, attributeId, value);
}

ViStatus NiTClkLibrary::GetAttributeViString(ViSession session, ViConstString channelName, ViAttr attributeId, ViInt32 bufSize, ViChar value[])
{
  if (!function_pointers_.GetAttributeViString) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_GetAttributeViString.");
  }
  return function_pointers_.GetAttributeViString(session, channelName, attributeId, bufSize, value);
}

ViStatus NiTClkLibrary::GetExtendedErrorInfo(ViChar errorString[], ViUInt32 errorStringSize)
{
  if (!function_pointers_.GetExtendedErrorInfo) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_GetExtendedErrorInfo.");
  }
  return function_pointers_.GetExtendedErrorInfo(errorString, errorStringSize);
}

ViStatus NiTClkLibrary::Initiate(ViUInt32 sessionCount, ViSession sessions[])
{
  if (!function_pointers_.Initiate) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_Initiate.");
  }
  return function_pointers_.Initiate(sessionCount, sessions);
}

ViStatus NiTClkLibrary::IsDone(ViUInt32 sessionCount, ViSession sessions[], ViBoolean* done)
{
  if (!function_pointers_.IsDone) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_IsDone.");
  }
  return function_pointers_.IsDone(sessionCount, sessions, done);
}

ViStatus NiTClkLibrary::SetAttributeViReal64(ViSession session, ViConstString channelName, ViAttr attributeId, ViReal64 value)
{
  if (!function_pointers_.SetAttributeViReal64) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_SetAttributeViReal64.");
  }
  return function_pointers_.SetAttributeViReal64(session, channelName, attributeId, value);
}

ViStatus NiTClkLibrary::SetAttributeViSession(ViSession session, ViConstString channelName, ViAttr attributeId, ViSession value)
{
  if (!function_pointers_.SetAttributeViSession) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_SetAttributeViSession.");
  }
  return function_pointers_.SetAttributeViSession(session, channelName, attributeId, value);
}

ViStatus NiTClkLibrary::SetAttributeViString(ViSession session, ViConstString channelName, ViAttr attributeId, ViConstString value)
{
  if (!function_pointers_.SetAttributeViString) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_SetAttributeViString.");
  }
  return function_pointers_.SetAttributeViString(session, channelName, attributeId, value);
}

ViStatus NiTClkLibrary::SetupForSyncPulseSenderSynchronize(ViUInt32 sessionCount, ViSession sessions[], ViReal64 minTime)
{
  if (!function_pointers_.SetupForSyncPulseSenderSynchronize) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_SetupForSyncPulseSenderSynchronize.");
  }
  return function_pointers_.SetupForSyncPulseSenderSynchronize(sessionCount, sessions, minTime);
}

ViStatus NiTClkLibrary::Synchronize(ViUInt32 sessionCount, ViSession sessions[], ViReal64 minTclkPeriod)
{
  if (!function_pointers_.Synchronize) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_Synchronize.");
  }
  return function_pointers_.Synchronize(sessionCount, sessions, minTclkPeriod);
}

ViStatus NiTClkLibrary::SynchronizeToSyncPulseSender(ViUInt32 sessionCount, ViSession sessions[], ViReal64 minTime)
{
  if (!function_pointers_.SynchronizeToSyncPulseSender) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_SynchronizeToSyncPulseSender.");
  }
  return function_pointers_.SynchronizeToSyncPulseSender(sessionCount, sessions, minTime);
}

ViStatus NiTClkLibrary::WaitUntilDone(ViUInt32 sessionCount, ViSession sessions[], ViReal64 timeout)
{
  if (!function_pointers_.WaitUntilDone) {
    throw nidevice_grpc::LibraryLoadException("Could not find niTClk_WaitUntilDone.");
  }
  return function_pointers_.WaitUntilDone(sessionCount, sessions, timeout);
}

}  // namespace nitclk_grpc
