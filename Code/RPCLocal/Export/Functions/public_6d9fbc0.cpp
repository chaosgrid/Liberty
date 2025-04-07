#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9fbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6da0790);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9fbea _public_6d9fbea

PROC_DECLARE(0x6d9fbc0, internal_6d9fbc0, public_6d9fbc0);
extern "C" NAKED register_t __cdecl internal_6d9fbc0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x3C
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9fbea
        mov ecx, eax
        call public_6da0790
        test eax, eax
        je public_6d9fbea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9fbea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9fbc0)
    }
}

#undef public_6d9fbea
