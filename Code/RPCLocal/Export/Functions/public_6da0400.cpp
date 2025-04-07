#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0400);
CLANG_FORWARD_PROC_SYMBOL(public_6da1150);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da042a _public_6da042a

PROC_DECLARE(0x6da0400, internal_6da0400, public_6da0400);
extern "C" NAKED register_t __cdecl internal_6da0400()
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
        je public_6da042a
        mov ecx, eax
        call public_6da1150
        test eax, eax
        je public_6da042a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da042a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0400)
    }
}

#undef public_6da042a
