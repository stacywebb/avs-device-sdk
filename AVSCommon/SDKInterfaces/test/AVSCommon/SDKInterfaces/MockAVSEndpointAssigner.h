/*
 * MockAVSEndpointAssigner.h
 *
 * Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_CLIENT_SDK_AVS_COMMON_SDK_INTERFACES_TEST_AVS_COMMON_SDK_INTERFACES_MOCK_AVS_ENDPOINT_ASSIGNER_H_
#define ALEXA_CLIENT_SDK_AVS_COMMON_SDK_INTERFACES_TEST_AVS_COMMON_SDK_INTERFACES_MOCK_AVS_ENDPOINT_ASSIGNER_H_

#include "AVSCommon/SDKInterfaces/AVSEndpointAssignerInterface.h"
#include <gmock/gmock.h>

namespace alexaClientSDK {
namespace avsCommon {
namespace sdkInterfaces {
namespace test {

/*
 * Mock class that implements @c AVSEndpointAssignerInterface.
 */
class MockAVSEndpointAssigner : public AVSEndpointAssignerInterface {
public:
    MOCK_METHOD1(setAVSEndpoint, void(const std::string& avsEndpoint));
};

} // namespace test
} // namespace sdkInterfaces
} // namespace avsCommon
} // namespace alexaClientSDK

#endif // ALEXA_CLIENT_SDK_AVS_COMMON_SDK_INTERFACES_TEST_AVS_COMMON_SDK_INTERFACES_MOCK_AVS_ENDPOINT_ASSIGNER_H_
