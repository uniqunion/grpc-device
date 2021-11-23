
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar header for the NI-Digital Pattern Driver Metadata
//---------------------------------------------------------------------
#ifndef NIDIGITALPATTERN_GRPC_SERVICE_REGISTRAR_H
#define NIDIGITALPATTERN_GRPC_SERVICE_REGISTRAR_H
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>

#include <memory>

#include <niDigital.h> // for ViSession

namespace grpc {
class ServerBuilder;
}

namespace nidigitalpattern_grpc {
using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& server_builder, 
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles);

} // nidigitalpattern_grpc

#endif  // NIDIGITALPATTERN_GRPC_SERVICE_REGISTRAR_H