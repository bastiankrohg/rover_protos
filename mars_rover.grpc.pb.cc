// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: mars_rover.proto

#include "mars_rover.pb.h"
#include "mars_rover.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace marsrover {

static const char* RoverService_method_names[] = {
  "/marsrover.RoverService/DriveForward",
  "/marsrover.RoverService/Reverse",
  "/marsrover.RoverService/TurnLeft",
  "/marsrover.RoverService/TurnRight",
  "/marsrover.RoverService/TurnOnSpot",
  "/marsrover.RoverService/RotatePeriscope",
  "/marsrover.RoverService/ControlHeadlights",
  "/marsrover.RoverService/ControlWheelLEDs",
  "/marsrover.RoverService/GetUltrasoundMeasurement",
  "/marsrover.RoverService/GetCameraStream",
};

std::unique_ptr< RoverService::Stub> RoverService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RoverService::Stub> stub(new RoverService::Stub(channel, options));
  return stub;
}

RoverService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_DriveForward_(RoverService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Reverse_(RoverService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TurnLeft_(RoverService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TurnRight_(RoverService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_TurnOnSpot_(RoverService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RotatePeriscope_(RoverService_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ControlHeadlights_(RoverService_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ControlWheelLEDs_(RoverService_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetUltrasoundMeasurement_(RoverService_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCameraStream_(RoverService_method_names[9], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RoverService::Stub::DriveForward(::grpc::ClientContext* context, const ::marsrover::DriveRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::DriveRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_DriveForward_, context, request, response);
}

void RoverService::Stub::async::DriveForward(::grpc::ClientContext* context, const ::marsrover::DriveRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::DriveRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DriveForward_, context, request, response, std::move(f));
}

void RoverService::Stub::async::DriveForward(::grpc::ClientContext* context, const ::marsrover::DriveRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DriveForward_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncDriveForwardRaw(::grpc::ClientContext* context, const ::marsrover::DriveRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::DriveRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_DriveForward_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncDriveForwardRaw(::grpc::ClientContext* context, const ::marsrover::DriveRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDriveForwardRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::Reverse(::grpc::ClientContext* context, const ::marsrover::DriveRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::DriveRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Reverse_, context, request, response);
}

void RoverService::Stub::async::Reverse(::grpc::ClientContext* context, const ::marsrover::DriveRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::DriveRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Reverse_, context, request, response, std::move(f));
}

void RoverService::Stub::async::Reverse(::grpc::ClientContext* context, const ::marsrover::DriveRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Reverse_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncReverseRaw(::grpc::ClientContext* context, const ::marsrover::DriveRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::DriveRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Reverse_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncReverseRaw(::grpc::ClientContext* context, const ::marsrover::DriveRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReverseRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::TurnLeft(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TurnLeft_, context, request, response);
}

void RoverService::Stub::async::TurnLeft(::grpc::ClientContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TurnLeft_, context, request, response, std::move(f));
}

void RoverService::Stub::async::TurnLeft(::grpc::ClientContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TurnLeft_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncTurnLeftRaw(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::TurnRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TurnLeft_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncTurnLeftRaw(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTurnLeftRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::TurnRight(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TurnRight_, context, request, response);
}

void RoverService::Stub::async::TurnRight(::grpc::ClientContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TurnRight_, context, request, response, std::move(f));
}

void RoverService::Stub::async::TurnRight(::grpc::ClientContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TurnRight_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncTurnRightRaw(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::TurnRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TurnRight_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncTurnRightRaw(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTurnRightRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::TurnOnSpot(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_TurnOnSpot_, context, request, response);
}

void RoverService::Stub::async::TurnOnSpot(::grpc::ClientContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TurnOnSpot_, context, request, response, std::move(f));
}

void RoverService::Stub::async::TurnOnSpot(::grpc::ClientContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_TurnOnSpot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncTurnOnSpotRaw(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::TurnRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_TurnOnSpot_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncTurnOnSpotRaw(::grpc::ClientContext* context, const ::marsrover::TurnRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncTurnOnSpotRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::RotatePeriscope(::grpc::ClientContext* context, const ::marsrover::RotateRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::RotateRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RotatePeriscope_, context, request, response);
}

void RoverService::Stub::async::RotatePeriscope(::grpc::ClientContext* context, const ::marsrover::RotateRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::RotateRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RotatePeriscope_, context, request, response, std::move(f));
}

void RoverService::Stub::async::RotatePeriscope(::grpc::ClientContext* context, const ::marsrover::RotateRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RotatePeriscope_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncRotatePeriscopeRaw(::grpc::ClientContext* context, const ::marsrover::RotateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::RotateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RotatePeriscope_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncRotatePeriscopeRaw(::grpc::ClientContext* context, const ::marsrover::RotateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRotatePeriscopeRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::ControlHeadlights(::grpc::ClientContext* context, const ::marsrover::LEDRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::LEDRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ControlHeadlights_, context, request, response);
}

void RoverService::Stub::async::ControlHeadlights(::grpc::ClientContext* context, const ::marsrover::LEDRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::LEDRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ControlHeadlights_, context, request, response, std::move(f));
}

void RoverService::Stub::async::ControlHeadlights(::grpc::ClientContext* context, const ::marsrover::LEDRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ControlHeadlights_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncControlHeadlightsRaw(::grpc::ClientContext* context, const ::marsrover::LEDRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::LEDRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ControlHeadlights_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncControlHeadlightsRaw(::grpc::ClientContext* context, const ::marsrover::LEDRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncControlHeadlightsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::ControlWheelLEDs(::grpc::ClientContext* context, const ::marsrover::WheelLEDRequest& request, ::marsrover::CommandResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::WheelLEDRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ControlWheelLEDs_, context, request, response);
}

void RoverService::Stub::async::ControlWheelLEDs(::grpc::ClientContext* context, const ::marsrover::WheelLEDRequest* request, ::marsrover::CommandResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::WheelLEDRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ControlWheelLEDs_, context, request, response, std::move(f));
}

void RoverService::Stub::async::ControlWheelLEDs(::grpc::ClientContext* context, const ::marsrover::WheelLEDRequest* request, ::marsrover::CommandResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ControlWheelLEDs_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::PrepareAsyncControlWheelLEDsRaw(::grpc::ClientContext* context, const ::marsrover::WheelLEDRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CommandResponse, ::marsrover::WheelLEDRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ControlWheelLEDs_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CommandResponse>* RoverService::Stub::AsyncControlWheelLEDsRaw(::grpc::ClientContext* context, const ::marsrover::WheelLEDRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncControlWheelLEDsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::GetUltrasoundMeasurement(::grpc::ClientContext* context, const ::marsrover::UltrasoundRequest& request, ::marsrover::UltrasoundResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::UltrasoundRequest, ::marsrover::UltrasoundResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetUltrasoundMeasurement_, context, request, response);
}

void RoverService::Stub::async::GetUltrasoundMeasurement(::grpc::ClientContext* context, const ::marsrover::UltrasoundRequest* request, ::marsrover::UltrasoundResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::UltrasoundRequest, ::marsrover::UltrasoundResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetUltrasoundMeasurement_, context, request, response, std::move(f));
}

void RoverService::Stub::async::GetUltrasoundMeasurement(::grpc::ClientContext* context, const ::marsrover::UltrasoundRequest* request, ::marsrover::UltrasoundResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetUltrasoundMeasurement_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::UltrasoundResponse>* RoverService::Stub::PrepareAsyncGetUltrasoundMeasurementRaw(::grpc::ClientContext* context, const ::marsrover::UltrasoundRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::UltrasoundResponse, ::marsrover::UltrasoundRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetUltrasoundMeasurement_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::UltrasoundResponse>* RoverService::Stub::AsyncGetUltrasoundMeasurementRaw(::grpc::ClientContext* context, const ::marsrover::UltrasoundRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetUltrasoundMeasurementRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RoverService::Stub::GetCameraStream(::grpc::ClientContext* context, const ::marsrover::CameraStreamRequest& request, ::marsrover::CameraStreamResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::marsrover::CameraStreamRequest, ::marsrover::CameraStreamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetCameraStream_, context, request, response);
}

void RoverService::Stub::async::GetCameraStream(::grpc::ClientContext* context, const ::marsrover::CameraStreamRequest* request, ::marsrover::CameraStreamResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::marsrover::CameraStreamRequest, ::marsrover::CameraStreamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetCameraStream_, context, request, response, std::move(f));
}

void RoverService::Stub::async::GetCameraStream(::grpc::ClientContext* context, const ::marsrover::CameraStreamRequest* request, ::marsrover::CameraStreamResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetCameraStream_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CameraStreamResponse>* RoverService::Stub::PrepareAsyncGetCameraStreamRaw(::grpc::ClientContext* context, const ::marsrover::CameraStreamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::marsrover::CameraStreamResponse, ::marsrover::CameraStreamRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetCameraStream_, context, request);
}

::grpc::ClientAsyncResponseReader< ::marsrover::CameraStreamResponse>* RoverService::Stub::AsyncGetCameraStreamRaw(::grpc::ClientContext* context, const ::marsrover::CameraStreamRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetCameraStreamRaw(context, request, cq);
  result->StartCall();
  return result;
}

RoverService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::DriveRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::DriveRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->DriveForward(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::DriveRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::DriveRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->Reverse(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::TurnRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->TurnLeft(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::TurnRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->TurnRight(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::TurnRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::TurnRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->TurnOnSpot(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::RotateRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::RotateRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->RotatePeriscope(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::LEDRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::LEDRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->ControlHeadlights(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::WheelLEDRequest, ::marsrover::CommandResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::WheelLEDRequest* req,
             ::marsrover::CommandResponse* resp) {
               return service->ControlWheelLEDs(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::UltrasoundRequest, ::marsrover::UltrasoundResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::UltrasoundRequest* req,
             ::marsrover::UltrasoundResponse* resp) {
               return service->GetUltrasoundMeasurement(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoverService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoverService::Service, ::marsrover::CameraStreamRequest, ::marsrover::CameraStreamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoverService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::marsrover::CameraStreamRequest* req,
             ::marsrover::CameraStreamResponse* resp) {
               return service->GetCameraStream(ctx, req, resp);
             }, this)));
}

RoverService::Service::~Service() {
}

::grpc::Status RoverService::Service::DriveForward(::grpc::ServerContext* context, const ::marsrover::DriveRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::Reverse(::grpc::ServerContext* context, const ::marsrover::DriveRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::TurnLeft(::grpc::ServerContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::TurnRight(::grpc::ServerContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::TurnOnSpot(::grpc::ServerContext* context, const ::marsrover::TurnRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::RotatePeriscope(::grpc::ServerContext* context, const ::marsrover::RotateRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::ControlHeadlights(::grpc::ServerContext* context, const ::marsrover::LEDRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::ControlWheelLEDs(::grpc::ServerContext* context, const ::marsrover::WheelLEDRequest* request, ::marsrover::CommandResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::GetUltrasoundMeasurement(::grpc::ServerContext* context, const ::marsrover::UltrasoundRequest* request, ::marsrover::UltrasoundResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RoverService::Service::GetCameraStream(::grpc::ServerContext* context, const ::marsrover::CameraStreamRequest* request, ::marsrover::CameraStreamResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace marsrover

