#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4157a0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_415798 _public_415798

PROC_DECLARE(0x415780, internal_415780, public_415780);
extern "C" NAKED register_t __cdecl internal_415780()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4157a0
        test byte ptr ss : [esp+8], 1
        je public_415798
        push esi
        call public_418978
        add esp, 4
        public_415798 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x415780)
    }
}

#undef public_415798
