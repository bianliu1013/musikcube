//////////////////////////////////////////////////////////////////////////////
//
// License Agreement:
//
// The following are Copyright � 2008, mC2 team
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    * Redistributions of source code must retain the above copyright notice,
//      this list of conditions and the following disclaimer.
//
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//    * Neither the name of the author nor the names of other contributors may
//      be used to endorse or promote products derived from this software
//      without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

#include "core/tracklist/IBase.h"
#include <core/Library/Base.h>
#include <boost/shared_ptr.hpp>

namespace musik{ namespace core{
    namespace tracklist {
        class IRandomAccess : public IBase{
            public:
                ~IRandomAccess(void){};

                virtual musik::core::TrackPtr operator [](int position) = 0;
                virtual int Size() = 0;
                virtual void SetCurrentPosition(int position) = 0;
                virtual int CurrentPosition() = 0;
                virtual void SetLibrary(musik::core::LibraryPtr setLibrary) = 0;
                virtual musik::core::LibraryPtr Library() = 0;

                virtual void CopyTracks(musik::core::tracklist::IRandomAccess &tracklist) = 0;
                virtual void AppendTracks(musik::core::tracklist::IRandomAccess &tracklist) = 0;
        };

        typedef boost::shared_ptr<IRandomAccess> IRandomAccessPtr;

    }
} }
