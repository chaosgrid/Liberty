#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9c890);
CLANG_FORWARD_PROC_SYMBOL(public_6d9c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9c8ba _public_6d9c8ba

PROC_DECLARE(0x6d9c890, internal_6d9c890, public_6d9c890);
extern "C" NAKED register_t __cdecl internal_6d9c890()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x40
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9c8ba
        mov ecx, eax
        call public_6d9c8d0
        test eax, eax
        je public_6d9c8ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9c8ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9c890)
    }
}

#undef public_6d9c8ba
