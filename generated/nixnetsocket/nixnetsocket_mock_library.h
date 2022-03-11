//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-XNETSOCKET
//---------------------------------------------------------------------
#ifndef NIXNETSOCKET_GRPC_MOCK_LIBRARY_H
#define NIXNETSOCKET_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nixnetsocket_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiXnetSocketMockLibrary : public nixnetsocket_grpc::NiXnetSocketLibraryInterface {
 public:
  MOCK_METHOD(int32_t, Accept, (nxSOCKET socket, nxsockaddr* addr, nxsocklen_t* addrlen), (override));
  MOCK_METHOD(int32_t, Bind, (nxSOCKET socket, nxsockaddr* name, nxsocklen_t namelen), (override));
  MOCK_METHOD(int32_t, Connect, (nxSOCKET socket, nxsockaddr* name, nxsocklen_t namelen), (override));
  MOCK_METHOD(int32_t, Listen, (nxSOCKET socket, int32_t backlog), (override));
  MOCK_METHOD(int32_t, SendTo, (nxSOCKET socket, char dataptr[], int32_t size, int32_t flags, nxsockaddr* to, nxsocklen_t tolen), (override));
  MOCK_METHOD(int32_t, Send, (nxSOCKET socket, char dataptr[], int32_t size, int32_t flags), (override));
  MOCK_METHOD(int32_t, Recv, (nxSOCKET socket, char mem[], int32_t size, int32_t flags), (override));
  MOCK_METHOD(int32_t, Shutdown, (nxSOCKET socket, int32_t how), (override));
  MOCK_METHOD(int32_t, Close, (nxSOCKET socket), (override));
  MOCK_METHOD(int32_t, GetLastErrorNum, (), (override));
  MOCK_METHOD(char*, GetLastErrorStr, (char buf[], size_t bufLen), (override));
  MOCK_METHOD(int32_t, IpStackClear, (nxIpStackRef_t stack_ref), (override));
  MOCK_METHOD(int32_t, IpStackCreate, (char stack_name[], char config[], nxIpStackRef_t* stack_ref), (override));
  MOCK_METHOD(int32_t, IsSet, (nxSOCKET fd, nxfd_set* set), (override));
  MOCK_METHOD(int32_t, Select, (int32_t nfds, nxfd_set* read_fds, nxfd_set* write_fds, nxfd_set* except_fds, nxtimeval* timeout), (override));
  MOCK_METHOD(int32_t, SetSockOpt, (nxSOCKET socket, int32_t level, int32_t optname, void* optval, nxsocklen_t optlen), (override));
  MOCK_METHOD(nxSOCKET, Socket, (nxIpStackRef_t stack_ref, int32_t domain, int32_t type, int32_t prototcol), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIXNETSOCKET_GRPC_MOCK_LIBRARY_H
