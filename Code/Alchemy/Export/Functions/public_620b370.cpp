#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b388 _public_620b388

PROC_DECLARE(0x620b370, internal_620b370, public_620b370);
extern "C" NAKED register_t __cdecl internal_620b370()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_620b300
        test byte ptr ss : [esp+8], 1
        je public_620b388
        push esi
        call public_62460e0
        add esp, 4
        public_620b388 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620b370)
    }
}

#undef public_620b388
