#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d99900);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d99948 _public_6d99948

PROC_DECLARE(0x6d99930, internal_6d99930, public_6d99930);
extern "C" NAKED register_t __cdecl internal_6d99930()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d99900
        test byte ptr ss : [esp+8], 1
        je public_6d99948
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d99948 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d99930)
    }
}

#undef public_6d99948
