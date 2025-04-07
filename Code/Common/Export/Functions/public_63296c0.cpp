#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63296df _public_63296df

PROC_DECLARE(0x63296c0, internal_63296c0, public_63296c0);
extern "C" NAKED register_t __cdecl internal_63296c0()
{
    __asm
    {
        push esi
        push 8
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63296df
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], offset public_63a4184
        mov dword ptr ds : [eax+4], ecx
        pop esi
        ret 
        public_63296df : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63296c0)
    }
}

#undef public_63296df
