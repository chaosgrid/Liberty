#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c880);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40c878 _public_40c878

PROC_DECLARE(0x40c860, internal_40c860, public_40c860);
extern "C" NAKED register_t __cdecl internal_40c860()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40c880
        test byte ptr ss : [esp+8], 1
        je public_40c878
        push esi
        call public_418978
        add esp, 4
        public_40c878 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40c860)
    }
}

#undef public_40c878
