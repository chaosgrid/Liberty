#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9cff0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9d030);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9d01d _public_6d9d01d

PROC_DECLARE(0x6d9cff0, internal_6d9cff0, public_6d9cff0);
extern "C" NAKED register_t __cdecl internal_6d9cff0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xB4
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9d01d
        mov ecx, eax
        call public_6d9d030
        test eax, eax
        je public_6d9d01d
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9d01d : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9cff0)
    }
}

#undef public_6d9d01d
