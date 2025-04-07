#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a560);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1a558 _public_6f1a558

PROC_DECLARE(0x6f1a540, internal_6f1a540, public_6f1a540);
extern "C" NAKED register_t __cdecl internal_6f1a540()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f1a560
        test byte ptr ss : [esp+8], 1
        je public_6f1a558
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f1a558 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1a540)
    }
}

#undef public_6f1a558
