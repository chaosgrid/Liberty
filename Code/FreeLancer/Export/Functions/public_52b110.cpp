#include "Freelancer-PCH.h"

PROC_DECLARE(0x52b110, internal_52b110, public_52b110);
extern "C" NAKED register_t __cdecl internal_52b110()
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
        mov dword ptr ds : [esi+0x28], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [esi+0x2C], ecx
        add edi, 0x30
        mov edx, dword ptr ds : [edi]
        add esi, 0x30
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52b110)
    }
}
