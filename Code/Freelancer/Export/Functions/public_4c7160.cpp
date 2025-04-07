#include "Freelancer-PCH.h"


#define public_4c716f _public_4c716f

PROC_DECLARE(0x4c7160, internal_4c7160, public_4c7160);
extern "C" NAKED register_t __cdecl internal_4c7160()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_4c716f
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        call eax
        pop ecx
        public_4c716f : nop
        ret 4
        UNREACHABLE_TRAP(0x4c7160)
    }
}

#undef public_4c716f
