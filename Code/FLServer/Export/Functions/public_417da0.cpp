#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417da0);
CLANG_FORWARD_PROC_SYMBOL(public_417dc0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_417db8 _public_417db8

PROC_DECLARE(0x417da0, internal_417da0, public_417da0);
extern "C" NAKED register_t __cdecl internal_417da0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_417dc0
        test byte ptr ss : [esp+8], 1
        je public_417db8
        push esi
        call public_418978
        add esp, 4
        public_417db8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x417da0)
    }
}

#undef public_417db8
