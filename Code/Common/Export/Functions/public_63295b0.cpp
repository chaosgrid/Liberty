#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63295cf _public_63295cf

PROC_DECLARE(0x63295b0, internal_63295b0, public_63295b0);
extern "C" NAKED register_t __cdecl internal_63295b0()
{
    __asm
    {
        push esi
        push 8
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63295cf
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], offset public_63a40fc
        mov dword ptr ds : [eax+4], ecx
        pop esi
        ret 
        public_63295cf : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63295b0)
    }
}

#undef public_63295cf
