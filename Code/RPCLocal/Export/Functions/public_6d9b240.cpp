#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b260);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b258 _public_6d9b258

PROC_DECLARE(0x6d9b240, internal_6d9b240, public_6d9b240);
extern "C" NAKED register_t __cdecl internal_6d9b240()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d9b260
        test byte ptr ss : [esp+8], 1
        je public_6d9b258
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d9b258 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d9b240)
    }
}

#undef public_6d9b258
