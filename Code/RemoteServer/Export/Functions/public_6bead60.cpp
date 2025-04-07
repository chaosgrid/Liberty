#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bead80);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6bead78 _public_6bead78

PROC_DECLARE(0x6bead60, internal_6bead60, public_6bead60);
extern "C" NAKED register_t __cdecl internal_6bead60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bead80
        test byte ptr ss : [esp+8], 1
        je public_6bead78
        push esi
        call public_6c09aaa
        add esp, 4
        public_6bead78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bead60)
    }
}

#undef public_6bead78
