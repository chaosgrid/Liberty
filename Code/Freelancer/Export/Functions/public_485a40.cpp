#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_485a60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_485a58 _public_485a58

PROC_DECLARE(0x485a40, internal_485a40, public_485a40);
extern "C" NAKED register_t __cdecl internal_485a40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_485a60
        test byte ptr ss : [esp+8], 1
        je public_485a58
        push esi
        call public_5b7e1d
        add esp, 4
        public_485a58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x485a40)
    }
}

#undef public_485a58
