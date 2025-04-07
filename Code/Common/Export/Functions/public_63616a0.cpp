#include "Common-PCH.h"


#define public_63616b1 _public_63616b1

PROC_DECLARE(0x63616a0, internal_63616a0, public_63616a0);
extern "C" NAKED register_t __cdecl internal_63616a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_63616b1
        test ecx, ecx
        je public_63616b1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_63616b1 : nop
        ret 4
        UNREACHABLE_TRAP(0x63616a0)
    }
}

#undef public_63616b1
