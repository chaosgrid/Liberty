#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9c7da _public_6d9c7da

PROC_DECLARE(0x6d9c7b0, internal_6d9c7b0, public_6d9c7b0);
extern "C" NAKED register_t __cdecl internal_6d9c7b0()
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
        je public_6d9c7da
        mov ecx, eax
        call public_6d9c7f0
        test eax, eax
        je public_6d9c7da
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9c7da : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9c7b0)
    }
}

#undef public_6d9c7da
