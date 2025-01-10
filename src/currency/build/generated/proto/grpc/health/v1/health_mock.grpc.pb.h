// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: grpc/health/v1/health.proto

#ifndef GRPC_MOCK_grpc_2fhealth_2fv1_2fhealth_2eproto__INCLUDED
#define GRPC_MOCK_grpc_2fhealth_2fv1_2fhealth_2eproto__INCLUDED

#include "grpc/health/v1/health.pb.h"
#include "grpc/health/v1/health.grpc.pb.h"

#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/sync_stream.h>
#include <gmock/gmock.h>
namespace grpc {
namespace health {
namespace v1 {

class MockHealthStub : public Health::StubInterface {
 public:
  MOCK_METHOD3(Check, ::grpc::Status(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::health::v1::HealthCheckResponse* response));
  MOCK_METHOD3(AsyncCheckRaw, ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>*(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq));
  MOCK_METHOD3(PrepareAsyncCheckRaw, ::grpc::ClientAsyncResponseReaderInterface< ::grpc::health::v1::HealthCheckResponse>*(::grpc::ClientContext* context, const ::grpc::health::v1::HealthCheckRequest& request, ::grpc::CompletionQueue* cq));
};

}  // namespace v1
}  // namespace health
}  // namespace grpc


#endif  // GRPC_MOCK_grpc_2fhealth_2fv1_2fhealth_2eproto__INCLUDED
