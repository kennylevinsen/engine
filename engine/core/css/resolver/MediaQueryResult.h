/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 * Copyright (C) 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Apple Inc. All rights reserved.
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef SKY_ENGINE_CORE_CSS_RESOLVER_MEDIAQUERYRESULT_H_
#define SKY_ENGINE_CORE_CSS_RESOLVER_MEDIAQUERYRESULT_H_

#include "sky/engine/core/css/MediaQueryExp.h"
#include "sky/engine/wtf/Noncopyable.h"
#include "sky/engine/wtf/RefCounted.h"

namespace blink {

class MediaQueryResult : public RefCounted<MediaQueryResult> {
    WTF_MAKE_NONCOPYABLE(MediaQueryResult); WTF_MAKE_FAST_ALLOCATED;
public:
    MediaQueryResult(const MediaQueryExp& expr, bool result)
        : m_expression(expr)
        , m_result(result)
    {
    }

    const MediaQueryExp* expression() const
    {
        return &m_expression;
    }

    bool result() const { return m_result; }

private:
    MediaQueryExp m_expression;
    bool m_result;
};

}

#endif  // SKY_ENGINE_CORE_CSS_RESOLVER_MEDIAQUERYRESULT_H_
