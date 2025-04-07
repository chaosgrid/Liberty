#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208840);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6208838 _public_6208838

PROC_DECLARE(0x6208820, internal_6208820, public_6208820);
extern "C" NAKED register_t __cdecl internal_6208820()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6208840
        test byte ptr ss : [esp+8], 1
        je public_6208838
        push esi
        call public_62460e0
        add esp, 4
        public_6208838 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6208820)
    }
}

#undef public_6208838
