#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c1400);
CLANG_FORWARD_PROC_SYMBOL(public_62c1420);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);

#define public_62c1418 _public_62c1418

PROC_DECLARE(0x62c1400, internal_62c1400, public_62c1400);
extern "C" NAKED register_t __cdecl internal_62c1400()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62c1420
        test byte ptr ss : [esp+8], 1
        je public_62c1418
        push esi
        call public_62fd570
        add esp, 4
        public_62c1418 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c1400)
    }
}

#undef public_62c1418
