#include "Common-PCH.h"


#define public_6342fcb _public_6342fcb

PROC_DECLARE(0x6342fc0, internal_6342fc0, public_6342fc0);
extern "C" NAKED register_t __cdecl internal_6342fc0()
{
    __asm
    {
        test ecx, ecx
        je public_6342fcb
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_6342fcb : nop
        ret 4
        UNREACHABLE_TRAP(0x6342fc0)
    }
}

#undef public_6342fcb
