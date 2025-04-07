#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a4920);
CLANG_FORWARD_PROC_SYMBOL(public_62bbd70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a4938 _public_62a4938

PROC_DECLARE(0x62a4920, internal_62a4920, public_62a4920);
extern "C" NAKED register_t __cdecl internal_62a4920()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62bbd70
        test byte ptr ss : [esp+8], 1
        je public_62a4938
        push esi
        call public_6391d5a
        add esp, 4
        public_62a4938 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a4920)
    }
}

#undef public_62a4938
