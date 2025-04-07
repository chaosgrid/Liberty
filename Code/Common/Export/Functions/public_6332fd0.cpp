#include "Common-PCH.h"


#define public_633301a _public_633301a

PROC_DECLARE(0x6332fd0, internal_6332fd0, public_6332fd0);
extern "C" NAKED register_t __cdecl internal_6332fd0()
{
    __asm
    {
        push esi
        push 0x20
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_633301a
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        mov dl, byte ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], offset public_63a4980
        mov byte ptr ds : [eax+0x18], dl
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_63a498c
        pop esi
        ret 
        public_633301a : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6332fd0)
    }
}

#undef public_633301a
