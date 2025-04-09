#include "Freelancer-PCH.h"

PROC_DECLARE(0x4538b0, internal_4538b0, public_4538b0);
extern "C" NAKED register_t __cdecl internal_4538b0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x3C]
        push edi
        lea eax, ds:[esi+0x6C]
        push eax
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[esi+0x2C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6278]
        mov ecx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x44]
        lea edx, ds:[edi+0x24]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        add esi, 0x78
        push esi
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_5c627c]
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x4538b0)
    }
}
