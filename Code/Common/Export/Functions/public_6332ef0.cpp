#include "Common-PCH.h"


#define public_6332f2e _public_6332f2e

PROC_DECLARE(0x6332ef0, internal_6332ef0, public_6332ef0);
extern "C" NAKED register_t __cdecl internal_6332ef0()
{
    __asm
    {
        push esi
        push 0x1C
        mov esi, ecx
        call dword ptr ds : [public_6399328]
        add esp, 4
        test eax, eax
        je public_6332f2e
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
        mov byte ptr ds : [eax+0x18], dl
        mov dword ptr ds : [eax], offset public_63a4980
        pop esi
        ret 
        public_6332f2e : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6332ef0)
    }
}

#undef public_6332f2e
