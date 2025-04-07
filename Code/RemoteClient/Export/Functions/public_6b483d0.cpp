#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b483f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b483e8 _public_6b483e8

PROC_DECLARE(0x6b483d0, internal_6b483d0, public_6b483d0);
extern "C" NAKED register_t __cdecl internal_6b483d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b483f0
        test byte ptr ss : [esp+8], 1
        je public_6b483e8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b483e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b483d0)
    }
}

#undef public_6b483e8
