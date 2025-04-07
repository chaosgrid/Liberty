#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b2f10);
CLANG_FORWARD_PROC_SYMBOL(public_62b2f30);
CLANG_FORWARD_PROC_SYMBOL(public_62fd570);

#define public_62b2f28 _public_62b2f28

PROC_DECLARE(0x62b2f10, internal_62b2f10, public_62b2f10);
extern "C" NAKED register_t __cdecl internal_62b2f10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62b2f30
        test byte ptr ss : [esp+8], 1
        je public_62b2f28
        push esi
        call public_62fd570
        add esp, 4
        public_62b2f28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b2f10)
    }
}

#undef public_62b2f28
