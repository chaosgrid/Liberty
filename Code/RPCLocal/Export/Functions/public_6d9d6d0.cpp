#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9d710);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9d6fa _public_6d9d6fa

PROC_DECLARE(0x6d9d6d0, internal_6d9d6d0, public_6d9d6d0);
extern "C" NAKED register_t __cdecl internal_6d9d6d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9d6fa
        mov ecx, eax
        call public_6d9d710
        test eax, eax
        je public_6d9d6fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9d6fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9d6d0)
    }
}

#undef public_6d9d6fa
