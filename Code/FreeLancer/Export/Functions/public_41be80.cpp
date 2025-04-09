#include "FreeLancer-PCH.h"


#define public_41be8e _public_41be8e

PROC_DECLARE(0x41be80, internal_41be80, public_41be80);
extern "C" NAKED register_t __cdecl internal_41be80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_41be8e
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        public_41be8e : nop
        ret 
        UNREACHABLE_TRAP(0x41be80)
    }
}

#undef public_41be8e
