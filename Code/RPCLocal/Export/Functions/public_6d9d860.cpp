#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d860);
CLANG_FORWARD_PROC_SYMBOL(public_6d9d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9d88a _public_6d9d88a

PROC_DECLARE(0x6d9d860, internal_6d9d860, public_6d9d860);
extern "C" NAKED register_t __cdecl internal_6d9d860()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x44
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9d88a
        mov ecx, eax
        call public_6d9d8a0
        test eax, eax
        je public_6d9d88a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9d88a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9d860)
    }
}

#undef public_6d9d88a
