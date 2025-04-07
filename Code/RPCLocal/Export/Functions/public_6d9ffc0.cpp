#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ffc0);
CLANG_FORWARD_PROC_SYMBOL(public_6da0a30);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9ffea _public_6d9ffea

PROC_DECLARE(0x6d9ffc0, internal_6d9ffc0, public_6d9ffc0);
extern "C" NAKED register_t __cdecl internal_6d9ffc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9ffea
        mov ecx, eax
        call public_6da0a30
        test eax, eax
        je public_6d9ffea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9ffea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9ffc0)
    }
}

#undef public_6d9ffea
