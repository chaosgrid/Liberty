#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289360);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6289358 _public_6289358

PROC_DECLARE(0x6289340, internal_6289340, public_6289340);
extern "C" NAKED register_t __cdecl internal_6289340()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6289360
        test byte ptr ss : [esp+8], 1
        je public_6289358
        push esi
        call public_6391d5a
        add esp, 4
        public_6289358 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6289340)
    }
}

#undef public_6289358
