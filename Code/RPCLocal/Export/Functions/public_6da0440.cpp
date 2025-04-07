#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0440);
CLANG_FORWARD_PROC_SYMBOL(public_6da11b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da046a _public_6da046a

PROC_DECLARE(0x6da0440, internal_6da0440, public_6da0440);
extern "C" NAKED register_t __cdecl internal_6da0440()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da046a
        mov ecx, eax
        call public_6da11b0
        test eax, eax
        je public_6da046a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da046a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0440)
    }
}

#undef public_6da046a
