#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b050);
CLANG_FORWARD_PROC_SYMBOL(public_6d9b090);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9b07a _public_6d9b07a

PROC_DECLARE(0x6d9b050, internal_6d9b050, public_6d9b050);
extern "C" NAKED register_t __cdecl internal_6d9b050()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9b07a
        mov ecx, eax
        call public_6d9b090
        test eax, eax
        je public_6d9b07a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9b07a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9b050)
    }
}

#undef public_6d9b07a
