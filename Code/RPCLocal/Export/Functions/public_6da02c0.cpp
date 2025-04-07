#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da02c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da0ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da02ea _public_6da02ea

PROC_DECLARE(0x6da02c0, internal_6da02c0, public_6da02c0);
extern "C" NAKED register_t __cdecl internal_6da02c0()
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
        je public_6da02ea
        mov ecx, eax
        call public_6da0ca0
        test eax, eax
        je public_6da02ea
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da02ea : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da02c0)
    }
}

#undef public_6da02ea
