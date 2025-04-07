#include "Freelancer-PCH.h"

PROC_DECLARE(0x52b350, internal_52b350, public_52b350);
extern "C" NAKED register_t __cdecl internal_52b350()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_5c6858]
        mov eax, dword ptr ds : [edi+0x28]
        pop edi
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52b350)
    }
}
