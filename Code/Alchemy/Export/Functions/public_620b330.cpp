#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b348 _public_620b348

PROC_DECLARE(0x620b330, internal_620b330, public_620b330);
extern "C" NAKED register_t __cdecl internal_620b330()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_620b350
        test byte ptr ss : [esp+8], 1
        je public_620b348
        push esi
        call public_62460e0
        add esp, 4
        public_620b348 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620b330)
    }
}

#undef public_620b348
