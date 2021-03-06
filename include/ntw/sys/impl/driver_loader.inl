/*
 * Copyright 2020 Justas Masiulis
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include "../driver.hpp"

namespace ntw::sys {

    status load_driver(unicode_string service_name)
    {
        return NTW_SYSCALL(NtLoadDriver)(&service_name.get());
    }

    status unload_driver(unicode_string service_name)
    {
        return NTW_SYSCALL(NtUnloadDriver)(&service_name.get());
    }

} // namespace ntw::sys