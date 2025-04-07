#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_632873d _public_632873d

PROC_DECLARE(0x6328710, internal_6328710, public_6328710);
extern "C" NAKED register_t __cdecl internal_6328710()
{
    __asm
    {
        push esi
        push 0x14
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_632873d
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], offset public_63a3f64
        mov dword ptr ds : [eax+0xC], ecx
        mov esi, dword ptr ds : [esi+4]
        and esi, ecx
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+0x10], edx
        pop esi
        ret 
        public_632873d : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6328710)
    }
}

#undef public_632873d
