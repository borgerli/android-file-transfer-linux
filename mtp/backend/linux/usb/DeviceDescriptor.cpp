/*
 * Android File Transfer for Linux: MTP client for android devices
 * Copyright (C) 2015  Vladimir Menshakov

 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#include <usb/DeviceDescriptor.h>
#include <usb/Directory.h>

namespace mtp { namespace usb
{
	DeviceDescriptor::DeviceDescriptor(const std::string &path): _path(path)
	{
		Directory dir(path);
		int count = Directory::ReadInt(path + "/bNumConfigurations");
		printf("CONFIGS: %d\n", count);
	}

	u16 DeviceDescriptor::GetVendorId() const
	{ return 0; }

	u16 DeviceDescriptor::GetProductId() const
	{ return 0; }

	DevicePtr DeviceDescriptor::Open(ContextPtr context)
	{
		return nullptr;
	}

	DevicePtr DeviceDescriptor::TryOpen(ContextPtr context)
	{
		return nullptr;
	}

	DeviceDescriptor::~DeviceDescriptor()
	{ }

}}