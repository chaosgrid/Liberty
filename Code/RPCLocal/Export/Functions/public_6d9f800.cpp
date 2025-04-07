#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9f800);
CLANG_FORWARD_PROC_SYMBOL(public_6da0fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9f82a _public_6d9f82a

PROC_DECLARE(0x6d9f800, internal_6d9f800, public_6d9f800);
extern "C" NAKED register_t __cdecl internal_6d9f800()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x30
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9f82a
        mov ecx, eax
        call public_6da0fc0
        test eax, eax
        je public_6d9f82a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9f82a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9f800)
    }
}

#undef public_6d9f82a
