/*
 * Copyright (C) 2022 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "stdafx.h"

namespace Oobe
{
    const AppConfig& appConfig()
    {
        // Initialized only once at compile-time and forever immutable.
        static constexpr AppConfig instance =
#ifdef OOBE_E2E_TESTING
          AppConfig{L"ui-driver.exe", true, true};
#else
          AppConfig{L"ubuntu_wsl_setup.exe", false, false};
#endif
        return instance;
    }
}
