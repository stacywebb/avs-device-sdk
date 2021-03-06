/*
 * SinkObserverInterface.h
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

#ifndef ALEXA_CLIENT_SDK_AVS_COMMON_UTILS_INCLUDE_AVS_COMMON_UTILS_LOGGER_SINK_OBSERVER_INTERFACE_H_
#define ALEXA_CLIENT_SDK_AVS_COMMON_UTILS_INCLUDE_AVS_COMMON_UTILS_LOGGER_SINK_OBSERVER_INTERFACE_H_

namespace alexaClientSDK {
namespace avsCommon {
namespace utils {
namespace logger {

// forward declaration
class Logger;

/**
 * This interface class allows notifications when the sink Logger changes.
 */
class SinkObserverInterface {
public:
    /**
     * This function will be called when the sink changes.
     *
     * @param sink The updated sink @c Logger
     */
    virtual void onSinkChanged(Logger& sink) = 0;
};

} // namespace logger
} // namespace utils
} // namespace avsCommon
} // namespace alexaClientSDK

#endif // ALEXA_CLIENT_SDK_AVS_COMMON_UTILS_INCLUDE_AVS_COMMON_UTILS_LOGGER_SINK_OBSERVER_INTERFACE_H_
