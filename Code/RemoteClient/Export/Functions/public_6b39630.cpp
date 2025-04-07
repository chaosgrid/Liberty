#include "RemoteClient-PCH.h"


#define public_6b39646 _public_6b39646

PROC_DECLARE(0x6b39630, internal_6b39630, public_6b39630);
extern "C" NAKED register_t __cdecl internal_6b39630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b39646
        cmp eax, 0x80
        ja public_6b39646
        mov eax, dword ptr ds : [ecx+eax*4+0xC]
        ret 4
        public_6b39646 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b39630)
    }
}

#undef public_6b39646
