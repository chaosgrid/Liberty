#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d0470);

#define public_4d0482 _public_4d0482

PROC_DECLARE(0x4d0470, internal_4d0470, public_4d0470);
extern "C" NAKED register_t __cdecl internal_4d0470()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        test eax, eax
        je public_4d0482
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4d0482 : nop
        ret 
        UNREACHABLE_TRAP(0x4d0470)
    }
}

#undef public_4d0482
