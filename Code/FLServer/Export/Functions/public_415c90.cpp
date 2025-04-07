#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415cb0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_415ca8 _public_415ca8

PROC_DECLARE(0x415c90, internal_415c90, public_415c90);
extern "C" NAKED register_t __cdecl internal_415c90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_415cb0
        test byte ptr ss : [esp+8], 1
        je public_415ca8
        push esi
        call public_418978
        add esp, 4
        public_415ca8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415c90)
    }
}

#undef public_415ca8
