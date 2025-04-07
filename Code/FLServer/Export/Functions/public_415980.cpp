#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4159a0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_415998 _public_415998

PROC_DECLARE(0x415980, internal_415980, public_415980);
extern "C" NAKED register_t __cdecl internal_415980()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4159a0
        test byte ptr ss : [esp+8], 1
        je public_415998
        push esi
        call public_418978
        add esp, 4
        public_415998 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415980)
    }
}

#undef public_415998
