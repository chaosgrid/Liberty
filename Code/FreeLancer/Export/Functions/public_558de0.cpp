#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558de0);

#define public_558df6 _public_558df6

PROC_DECLARE(0x558de0, internal_558de0, public_558de0);
extern "C" NAKED register_t __cdecl internal_558de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_679a08]
        jne public_558df6
        mov dword ptr ds : [public_679a08], 0
        public_558df6 : nop
        ret 
        UNREACHABLE_TRAP(0x558de0)
    }
}

#undef public_558df6
