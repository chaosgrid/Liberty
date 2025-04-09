#include "Freelancer-PCH.h"

PROC_DECLARE(0x452c70, internal_452c70, public_452c70);
extern "C" NAKED register_t __cdecl internal_452c70()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [edi+0x6C]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        lea ebx, ds:[edi+0x2C]
        call dword ptr ds : [edx+0x90]
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_5c6278]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x44]
        lea ecx, ds:[edi+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x98]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
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
        UNREACHABLE_TRAP(0x452c70)
    }
}
