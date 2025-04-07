#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_419110);

#define public_40ea58 _public_40ea58

PROC_DECLARE(0x40ea40, internal_40ea40, public_40ea40);
extern "C" NAKED register_t __cdecl internal_40ea40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_419110
        test byte ptr ss : [esp+8], 1
        je public_40ea58
        push esi
        call public_418978
        add esp, 4
        public_40ea58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40ea40)
    }
}

#undef public_40ea58
