#include "Common-PCH.h"


#define public_6329340 _public_6329340

PROC_DECLARE(0x6329320, internal_6329320, public_6329320);
extern "C" NAKED register_t __cdecl internal_6329320()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi], offset public_63a4074
        jge public_6329340
        push edi
        call dword ptr ds : [public_6399238]
        add esp, 4
        public_6329340 : nop
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, esi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329320)
    }
}

#undef public_6329340
