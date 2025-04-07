#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0180);
CLANG_FORWARD_PROC_SYMBOL(public_6da0b80);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da01ad _public_6da01ad

PROC_DECLARE(0x6da0180, internal_6da0180, public_6da0180);
extern "C" NAKED register_t __cdecl internal_6da0180()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0xB0
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da01ad
        mov ecx, eax
        call public_6da0b80
        test eax, eax
        je public_6da01ad
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da01ad : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0180)
    }
}

#undef public_6da01ad
