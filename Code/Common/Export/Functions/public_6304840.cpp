#include "Common-PCH.h"

PROC_DECLARE(0x6304840, internal_6304840, public_6304840);
extern "C" NAKED register_t __cdecl internal_6304840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        shr esi, 1
        push esi
        push eax
        push edi
        call dword ptr ds : [public_6399234]
        add esp, 0xC
        mov word ptr ds : [edi+esi*2-2], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6304840)
    }
}
