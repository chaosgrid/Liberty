#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e940);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40e938 _public_40e938

PROC_DECLARE(0x40e920, internal_40e920, public_40e920);
extern "C" NAKED register_t __cdecl internal_40e920()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40e940
        test byte ptr ss : [esp+8], 1
        je public_40e938
        push esi
        call public_418978
        add esp, 4
        public_40e938 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e920)
    }
}

#undef public_40e938
