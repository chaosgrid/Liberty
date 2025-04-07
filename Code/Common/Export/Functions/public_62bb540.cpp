#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb540);
CLANG_FORWARD_PROC_SYMBOL(public_62bb590);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bb558 _public_62bb558

PROC_DECLARE(0x62bb540, internal_62bb540, public_62bb540);
extern "C" NAKED register_t __cdecl internal_62bb540()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62bb590
        test byte ptr ss : [esp+8], 1
        je public_62bb558
        push esi
        call public_6391d5a
        add esp, 4
        public_62bb558 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bb540)
    }
}

#undef public_62bb558
