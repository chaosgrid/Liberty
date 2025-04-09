#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406cd0);
CLANG_FORWARD_PROC_SYMBOL(public_5595a0);

#define public_5595b7 _public_5595b7

PROC_DECLARE(0x5595a0, internal_5595a0, public_5595a0);
extern "C" NAKED register_t __cdecl internal_5595a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFFFFFFFF
        je public_5595b7
        mov ecx, dword ptr ss : [esp+4]
        push 0
        push 0
        push eax
        call public_406cd0
        public_5595b7 : nop
        ret 
        UNREACHABLE_TRAP(0x5595a0)
    }
}

#undef public_5595b7
