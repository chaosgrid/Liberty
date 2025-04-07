#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b47fe8 _public_6b47fe8

PROC_DECLARE(0x6b47fd0, internal_6b47fd0, public_6b47fd0);
extern "C" NAKED register_t __cdecl internal_6b47fd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b47ff0
        test byte ptr ss : [esp+8], 1
        je public_6b47fe8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b47fe8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b47fd0)
    }
}

#undef public_6b47fe8
