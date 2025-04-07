#include "FLServer-PCH.h"


#define public_40117e _public_40117e

PROC_DECLARE(0x401170, internal_401170, public_401170);
extern "C" NAKED register_t __cdecl internal_401170()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_40117e
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        public_40117e : nop
        ret 
        UNREACHABLE_TRAP(0x401170)
    }
}

#undef public_40117e
