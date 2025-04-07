#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47e440);
CLANG_FORWARD_PROC_SYMBOL(public_47e460);

#define public_47e450 _public_47e450

PROC_DECLARE(0x47e440, internal_47e440, public_47e440);
extern "C" NAKED register_t __cdecl internal_47e440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jne public_47e450
        mov eax, 5
        ret 4
        public_47e450 : nop
        mov eax, dword ptr ds : [eax+4]
        push eax
        call public_47e460
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x47e440)
    }
}

#undef public_47e450
