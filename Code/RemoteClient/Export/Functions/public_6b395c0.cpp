#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d0e);

#define public_6b395dc _public_6b395dc

PROC_DECLARE(0x6b395c0, internal_6b395c0, public_6b395c0);
extern "C" NAKED register_t __cdecl internal_6b395c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jbe public_6b395dc
        cmp eax, 0x80
        ja public_6b395dc
        mov ecx, dword ptr ds : [ecx+eax*4+0xC]
        test ecx, ecx
        je public_6b395dc
        call public_6b69d0e
        public_6b395dc : nop
        ret 4
        UNREACHABLE_TRAP(0x6b395c0)
    }
}

#undef public_6b395dc
