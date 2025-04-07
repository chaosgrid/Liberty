#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0240);
CLANG_FORWARD_PROC_SYMBOL(public_6da0c40);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da026a _public_6da026a

PROC_DECLARE(0x6da0240, internal_6da0240, public_6da0240);
extern "C" NAKED register_t __cdecl internal_6da0240()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x20
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da026a
        mov ecx, eax
        call public_6da0c40
        test eax, eax
        je public_6da026a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da026a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0240)
    }
}

#undef public_6da026a
