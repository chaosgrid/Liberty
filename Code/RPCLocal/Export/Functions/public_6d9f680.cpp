#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9f680);
CLANG_FORWARD_PROC_SYMBOL(public_6da0e20);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9f6ad _public_6d9f6ad

PROC_DECLARE(0x6d9f680, internal_6d9f680, public_6d9f680);
extern "C" NAKED register_t __cdecl internal_6d9f680()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x90
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9f6ad
        mov ecx, eax
        call public_6da0e20
        test eax, eax
        je public_6d9f6ad
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9f6ad : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9f680)
    }
}

#undef public_6d9f6ad
