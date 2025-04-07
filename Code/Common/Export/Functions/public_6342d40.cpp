#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6342fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6342d58 _public_6342d58

PROC_DECLARE(0x6342d40, internal_6342d40, public_6342d40);
extern "C" NAKED register_t __cdecl internal_6342d40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6342fd0
        test byte ptr ss : [esp+8], 1
        je public_6342d58
        push esi
        call public_6391d5a
        add esp, 4
        public_6342d58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6342d40)
    }
}

#undef public_6342d58
