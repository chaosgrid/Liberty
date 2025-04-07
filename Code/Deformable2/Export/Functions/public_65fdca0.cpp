#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fdc60);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65fdcb8 _public_65fdcb8

PROC_DECLARE(0x65fdca0, internal_65fdca0, public_65fdca0);
extern "C" NAKED register_t __cdecl internal_65fdca0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65fdc60
        test byte ptr ss : [esp+8], 1
        je public_65fdcb8
        push esi
        call public_6600bb0
        add esp, 4
        public_65fdcb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65fdca0)
    }
}

#undef public_65fdcb8
