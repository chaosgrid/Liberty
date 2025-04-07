#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289850);
CLANG_FORWARD_PROC_SYMBOL(public_6290840);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6290858 _public_6290858

PROC_DECLARE(0x6290840, internal_6290840, public_6290840);
extern "C" NAKED register_t __cdecl internal_6290840()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6289850
        test byte ptr ss : [esp+8], 1
        je public_6290858
        push esi
        call public_6391d5a
        add esp, 4
        public_6290858 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6290840)
    }
}

#undef public_6290858
