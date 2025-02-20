// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/channel/v1/service.proto

#include "google/cloud/channel/v1/cloud_channel_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudChannelServiceConnectionIdempotencyPolicy::
    ~CloudChannelServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudChannelServiceConnectionIdempotencyPolicy>
CloudChannelServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CloudChannelServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListCustomers(
    google::cloud::channel::v1::ListCustomersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::GetCustomer(
    google::cloud::channel::v1::GetCustomerRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::CheckCloudIdentityAccountsExist(
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::CreateCustomer(
    google::cloud::channel::v1::CreateCustomerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::UpdateCustomer(
    google::cloud::channel::v1::UpdateCustomerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::DeleteCustomer(
    google::cloud::channel::v1::DeleteCustomerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ImportCustomer(
    google::cloud::channel::v1::ImportCustomerRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ProvisionCloudIdentity(
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListEntitlements(
    google::cloud::channel::v1::ListEntitlementsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListTransferableSkus(
    google::cloud::channel::v1::ListTransferableSkusRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListTransferableOffers(
    google::cloud::channel::v1::ListTransferableOffersRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::GetEntitlement(
    google::cloud::channel::v1::GetEntitlementRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::CreateEntitlement(
    google::cloud::channel::v1::CreateEntitlementRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ChangeParameters(
    google::cloud::channel::v1::ChangeParametersRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ChangeRenewalSettings(
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ChangeOffer(
    google::cloud::channel::v1::ChangeOfferRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::StartPaidService(
    google::cloud::channel::v1::StartPaidServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::SuspendEntitlement(
    google::cloud::channel::v1::SuspendEntitlementRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::CancelEntitlement(
    google::cloud::channel::v1::CancelEntitlementRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ActivateEntitlement(
    google::cloud::channel::v1::ActivateEntitlementRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::TransferEntitlements(
    google::cloud::channel::v1::TransferEntitlementsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::TransferEntitlementsToGoogle(
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListChannelPartnerLinks(
    google::cloud::channel::v1::ListChannelPartnerLinksRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::GetChannelPartnerLink(
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::CreateChannelPartnerLink(
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::UpdateChannelPartnerLink(
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::GetCustomerRepricingConfig(
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListCustomerRepricingConfigs(
    google::cloud::channel::v1::
        ListCustomerRepricingConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::CreateCustomerRepricingConfig(
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::UpdateCustomerRepricingConfig(
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::DeleteCustomerRepricingConfig(
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::
    GetChannelPartnerRepricingConfig(
        google::cloud::channel::v1::
            GetChannelPartnerRepricingConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::
    ListChannelPartnerRepricingConfigs(
        google::cloud::channel::v1::
            ListChannelPartnerRepricingConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::
    CreateChannelPartnerRepricingConfig(
        google::cloud::channel::v1::
            CreateChannelPartnerRepricingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::
    UpdateChannelPartnerRepricingConfig(
        google::cloud::channel::v1::
            UpdateChannelPartnerRepricingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::
    DeleteChannelPartnerRepricingConfig(
        google::cloud::channel::v1::
            DeleteChannelPartnerRepricingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListSkuGroups(
    google::cloud::channel::v1::ListSkuGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListSkuGroupBillableSkus(
    google::cloud::channel::v1::ListSkuGroupBillableSkusRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::LookupOffer(
    google::cloud::channel::v1::LookupOfferRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListProducts(
    google::cloud::channel::v1::ListProductsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListSkus(
    google::cloud::channel::v1::ListSkusRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListOffers(
    google::cloud::channel::v1::ListOffersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListPurchasableSkus(
    google::cloud::channel::v1::ListPurchasableSkusRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListPurchasableOffers(
    google::cloud::channel::v1::ListPurchasableOffersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::RegisterSubscriber(
    google::cloud::channel::v1::RegisterSubscriberRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::UnregisterSubscriber(
    google::cloud::channel::v1::UnregisterSubscriberRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudChannelServiceConnectionIdempotencyPolicy::ListSubscribers(
    google::cloud::channel::v1::ListSubscribersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
CloudChannelServiceConnectionIdempotencyPolicy::ListEntitlementChanges(
    google::cloud::channel::v1::ListEntitlementChangesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<CloudChannelServiceConnectionIdempotencyPolicy>
MakeDefaultCloudChannelServiceConnectionIdempotencyPolicy() {
  return std::make_unique<CloudChannelServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1
}  // namespace cloud
}  // namespace google
