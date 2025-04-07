#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bead20);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bead18 _public_6bead18

PROC_DECLARE(0x6bead00, internal_6bead00, public_6bead00);
extern "C" NAKED register_t __cdecl internal_6bead00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bead20
        test byte ptr ss : [esp+8], 1
        je public_6bead18
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bead18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bead00)
    }
}

#undef public_6bead18
