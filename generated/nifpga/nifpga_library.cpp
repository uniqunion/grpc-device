//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-FPGA Metadata
//---------------------------------------------------------------------
#include "nifpga_library.h"
#include <server/shared_library.h>

#include <memory>

#if defined(_MSC_VER)
static const char* kLibraryName = "NiFpga.dll";
#else
static const char* kLibraryName = "libNiFpga.so";
#endif

namespace nifpga_grpc {

NiFpgaLibrary::NiFpgaLibrary() : NiFpgaLibrary(std::make_shared<nidevice_grpc::SharedLibrary>()) {}

NiFpgaLibrary::NiFpgaLibrary(std::shared_ptr<nidevice_grpc::SharedLibraryInterface> shared_library) : shared_library_(shared_library)
{
  shared_library_->set_library_name(kLibraryName);
  shared_library_->load();
  bool loaded = shared_library_->is_loaded();
  memset(&function_pointers_, 0, sizeof(function_pointers_));
  if (!loaded) {
    return;
  }
  function_pointers_.Abort = reinterpret_cast<AbortPtr>(shared_library_->get_function_pointer("NiFpgaDll_Abort"));
  function_pointers_.Close = reinterpret_cast<ClosePtr>(shared_library_->get_function_pointer("NiFpgaDll_Close"));
  function_pointers_.CommitFifoConfiguration = reinterpret_cast<CommitFifoConfigurationPtr>(shared_library_->get_function_pointer("NiFpgaDll_CommitFifoConfiguration"));
  function_pointers_.Download = reinterpret_cast<DownloadPtr>(shared_library_->get_function_pointer("NiFpgaDll_Download"));
  function_pointers_.Open = reinterpret_cast<OpenPtr>(shared_library_->get_function_pointer("NiFpgaDll_Open"));
  function_pointers_.ReleaseFifoElements = reinterpret_cast<ReleaseFifoElementsPtr>(shared_library_->get_function_pointer("NiFpgaDll_ReleaseFifoElements"));
  function_pointers_.Reset = reinterpret_cast<ResetPtr>(shared_library_->get_function_pointer("NiFpgaDll_Reset"));
  function_pointers_.Run = reinterpret_cast<RunPtr>(shared_library_->get_function_pointer("NiFpgaDll_Run"));
  function_pointers_.StartFifo = reinterpret_cast<StartFifoPtr>(shared_library_->get_function_pointer("NiFpgaDll_StartFifo"));
  function_pointers_.StopFifo = reinterpret_cast<StopFifoPtr>(shared_library_->get_function_pointer("NiFpgaDll_StopFifo"));
  function_pointers_.UnreserveFifo = reinterpret_cast<UnreserveFifoPtr>(shared_library_->get_function_pointer("NiFpgaDll_UnreserveFifo"));
}

NiFpgaLibrary::~NiFpgaLibrary()
{
}

::grpc::Status NiFpgaLibrary::check_function_exists(std::string functionName)
{
  return shared_library_->function_exists(functionName.c_str())
    ? ::grpc::Status::OK
    : ::grpc::Status(::grpc::NOT_FOUND, "Could not find the function " + functionName);
}

NiFpga_Status NiFpgaLibrary::Abort(NiFpga_Session session)
{
  if (!function_pointers_.Abort) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_Abort.");
  }
  return function_pointers_.Abort(session);
}

NiFpga_Status NiFpgaLibrary::Close(NiFpga_Session session, uint32_t attribute)
{
  if (!function_pointers_.Close) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_Close.");
  }
  return function_pointers_.Close(session, attribute);
}

NiFpga_Status NiFpgaLibrary::CommitFifoConfiguration(NiFpga_Session session, uint32_t fifo)
{
  if (!function_pointers_.CommitFifoConfiguration) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_CommitFifoConfiguration.");
  }
  return function_pointers_.CommitFifoConfiguration(session, fifo);
}

NiFpga_Status NiFpgaLibrary::Download(NiFpga_Session session)
{
  if (!function_pointers_.Download) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_Download.");
  }
  return function_pointers_.Download(session);
}

NiFpga_Status NiFpgaLibrary::Open(char bitfile[], char signature[], char resource[], uint32_t attribute, NiFpga_Session* session)
{
  if (!function_pointers_.Open) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_Open.");
  }
  return function_pointers_.Open(bitfile, signature, resource, attribute, session);
}

NiFpga_Status NiFpgaLibrary::ReleaseFifoElements(NiFpga_Session session, uint32_t fifo, size_t elements)
{
  if (!function_pointers_.ReleaseFifoElements) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_ReleaseFifoElements.");
  }
  return function_pointers_.ReleaseFifoElements(session, fifo, elements);
}

NiFpga_Status NiFpgaLibrary::Reset(NiFpga_Session session)
{
  if (!function_pointers_.Reset) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_Reset.");
  }
  return function_pointers_.Reset(session);
}

NiFpga_Status NiFpgaLibrary::Run(NiFpga_Session session, uint32_t attribute)
{
  if (!function_pointers_.Run) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_Run.");
  }
  return function_pointers_.Run(session, attribute);
}

NiFpga_Status NiFpgaLibrary::StartFifo(NiFpga_Session session, uint32_t fifo)
{
  if (!function_pointers_.StartFifo) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_StartFifo.");
  }
  return function_pointers_.StartFifo(session, fifo);
}

NiFpga_Status NiFpgaLibrary::StopFifo(NiFpga_Session session, uint32_t fifo)
{
  if (!function_pointers_.StopFifo) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_StopFifo.");
  }
  return function_pointers_.StopFifo(session, fifo);
}

NiFpga_Status NiFpgaLibrary::UnreserveFifo(NiFpga_Session session, uint32_t fifo)
{
  if (!function_pointers_.UnreserveFifo) {
    throw nidevice_grpc::LibraryLoadException("Could not find NiFpga_UnreserveFifo.");
  }
  return function_pointers_.UnreserveFifo(session, fifo);
}

}  // namespace nifpga_grpc
