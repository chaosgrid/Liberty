#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406700);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4066f8 _public_4066f8

PROC_DECLARE(0x4066e0, internal_4066e0, public_4066e0);
extern "C" NAKED register_t __cdecl internal_4066e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_406700
        test byte ptr ss : [esp+8], 1
        je public_4066f8
        push esi
        call public_418978
        add esp, 4
        public_4066f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4066e0)
    }
}

#undef public_4066f8
