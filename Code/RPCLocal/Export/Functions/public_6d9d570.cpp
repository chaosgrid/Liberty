#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d570);
CLANG_FORWARD_PROC_SYMBOL(public_6d9d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9d59a _public_6d9d59a

PROC_DECLARE(0x6d9d570, internal_6d9d570, public_6d9d570);
extern "C" NAKED register_t __cdecl internal_6d9d570()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x48
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9d59a
        mov ecx, eax
        call public_6d9d5b0
        test eax, eax
        je public_6d9d59a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9d59a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9d570)
    }
}

#undef public_6d9d59a
