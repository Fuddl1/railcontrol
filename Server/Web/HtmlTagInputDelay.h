/*
RailControl - Model Railway Control Software

Copyright (c) 2017-2026 by Teddy / Dominik Mahrer - www.railcontrol.org

RailControl is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

RailControl is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with RailControl; see the file LICENCE. If not see
<http://www.gnu.org/licenses/>.
*/

#pragma once

#include <string>

#include "Server/Web/HtmlTag.h"

namespace Server { namespace Web
{
	class HtmlTagInputDelay : public HtmlTag
	{
		public:
			HtmlTagInputDelay() = delete;
			HtmlTagInputDelay(HtmlTagInputDelay&) = delete;
			HtmlTagInputDelay& operator=(HtmlTagInputDelay&) = delete;

			HtmlTagInputDelay(const std::string& name, const int value, const int min, const int max);

			inline virtual HtmlTag AddClass(const std::string& className) override
			{
				if (childTags.size() > 1)
				{
					childTags[1].AddClass(className);
				}
				else
				{
					HtmlTag::AddClass(className);
				}
				return *this;
			}
	};
}} // namespace Server::Web