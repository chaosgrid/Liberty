#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4eee10);
CLANG_FORWARD_PROC_SYMBOL(public_4f3a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f3a58 _public_4f3a58

PROC_DECLARE(0x4f3a40, internal_4f3a40, public_4f3a40);
extern "C" NAKED register_t __cdecl internal_4f3a40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4eee10
        test byte ptr ss : [esp+8], 1
        je public_4f3a58
        push esi
        call public_5b7e1d
        add esp, 4
        public_4f3a58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f3a40)
    }
}

#undef public_4f3a58
