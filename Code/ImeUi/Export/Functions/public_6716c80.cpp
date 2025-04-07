#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6716c80);

#define public_6716c9a _public_6716c9a

PROC_DECLARE(0x6716c80, internal_6716c80, public_6716c80);
extern "C" NAKED register_t __cdecl internal_6716c80()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 1
        jne public_6716c9a
        cmp dword ptr ds : [public_671d040], 0
        jne public_6716c9a
        push dword ptr ss : [esp+4]
        call dword ptr ds : [public_67170a0]
        public_6716c9a : nop
        push 1
        pop eax
        ret 0xC
        UNREACHABLE_TRAP(0x6716c80)
    }
}

#undef public_6716c9a
