#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f43a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f43a68 _public_6f43a68

PROC_DECLARE(0x6f43a50, internal_6f43a50, public_6f43a50);
extern "C" NAKED register_t __cdecl internal_6f43a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f43a70
        test byte ptr ss : [esp+8], 1
        je public_6f43a68
        push esi
        call public_6f57e26
        add esp, 4
        public_6f43a68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f43a50)
    }
}

#undef public_6f43a68
