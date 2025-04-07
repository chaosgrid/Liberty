#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414600);
CLANG_FORWARD_PROC_SYMBOL(public_4155a0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4155b8 _public_4155b8

PROC_DECLARE(0x4155a0, internal_4155a0, public_4155a0);
extern "C" NAKED register_t __cdecl internal_4155a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_414600
        test byte ptr ss : [esp+8], 1
        je public_4155b8
        push esi
        call public_418978
        add esp, 4
        public_4155b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4155a0)
    }
}

#undef public_4155b8
