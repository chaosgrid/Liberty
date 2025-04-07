#include "Common-PCH.h"


#define public_6329375 _public_6329375

PROC_DECLARE(0x6329350, internal_6329350, public_6329350);
extern "C" NAKED register_t __cdecl internal_6329350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        push esi
        mov esi, ecx
        jge public_6329375
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call dword ptr ds : [public_6399238]
        add esp, 4
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 8
        public_6329375 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6329350)
    }
}

#undef public_6329375
