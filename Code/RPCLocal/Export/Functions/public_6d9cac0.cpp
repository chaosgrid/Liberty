#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cac0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9cb00);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9caea _public_6d9caea

PROC_DECLARE(0x6d9cac0, internal_6d9cac0, public_6d9cac0);
extern "C" NAKED register_t __cdecl internal_6d9cac0()
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
        je public_6d9caea
        mov ecx, eax
        call public_6d9cb00
        test eax, eax
        je public_6d9caea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9caea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9cac0)
    }
}

#undef public_6d9caea
