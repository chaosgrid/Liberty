#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5641d0);

#define public_5641e0 _public_5641e0

PROC_DECLARE(0x5641d0, internal_5641d0, public_5641d0);
extern "C" NAKED register_t __cdecl internal_5641d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67a4a4]
        test ecx, ecx
        je public_5641e0
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_5641e0 : nop
        mov dword ptr ds : [public_67a4a4], 0
        ret 
        UNREACHABLE_TRAP(0x5641d0)
    }
}

#undef public_5641e0
