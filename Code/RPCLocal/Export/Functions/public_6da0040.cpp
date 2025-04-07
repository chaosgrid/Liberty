#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0040);
CLANG_FORWARD_PROC_SYMBOL(public_6da0af0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da006a _public_6da006a

PROC_DECLARE(0x6da0040, internal_6da0040, public_6da0040);
extern "C" NAKED register_t __cdecl internal_6da0040()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x20
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da006a
        mov ecx, eax
        call public_6da0af0
        test eax, eax
        je public_6da006a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da006a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0040)
    }
}

#undef public_6da006a
