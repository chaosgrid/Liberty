#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd203);

#define public_65dd21b _public_65dd21b

PROC_DECLARE(0x65dd203, internal_65dd203, public_65dd203);
extern "C" NAKED register_t __cdecl internal_65dd203()
{
    __asm
    {
        push esi
        push 1
        pop esi
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_65e10f0]
        test eax, eax
        je public_65dd21b
        xor esi, esi
        public_65dd21b : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dd203)
    }
}

#undef public_65dd21b
