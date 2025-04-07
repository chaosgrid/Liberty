#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9f900);
CLANG_FORWARD_PROC_SYMBOL(public_6da0660);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9f92a _public_6d9f92a

PROC_DECLARE(0x6d9f900, internal_6d9f900, public_6d9f900);
extern "C" NAKED register_t __cdecl internal_6d9f900()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x38
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9f92a
        mov ecx, eax
        call public_6da0660
        test eax, eax
        je public_6d9f92a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9f92a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9f900)
    }
}

#undef public_6d9f92a
