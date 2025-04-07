#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632990f _public_632990f

PROC_DECLARE(0x63298f0, internal_63298f0, public_63298f0);
extern "C" NAKED register_t __cdecl internal_63298f0()
{
    __asm
    {
        push esi
        push 8
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_632990f
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], offset public_63a431c
        mov dword ptr ds : [eax+4], ecx
        pop esi
        ret 
        public_632990f : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63298f0)
    }
}

#undef public_632990f
