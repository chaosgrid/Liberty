#include "Freelancer-PCH.h"

PROC_DECLARE(0x452b50, internal_452b50, public_452b50);
extern "C" NAKED register_t __cdecl internal_452b50()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_5c6d58]
        mov edx, dword ptr ds : [ecx]
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0x6C]
        mov ebx, dword ptr ds : [eax+0x30]
        mov eax, dword ptr ss : [esp+0x44]
        push edi
        add eax, 0x24
        push eax
        lea ecx, ss:[esp+0x14]
        lea edi, ds:[esi+0x2C]
        push ecx
        mov ecx, edi
        call dword ptr ds : [public_5c6270]
        mov edx, dword ptr ds : [public_5c6d58]
        push eax
        mov eax, dword ptr ds : [edx]
        push ebx
        push eax
        call dword ptr ss : [ebp+0x4C]
        mov ecx, dword ptr ds : [esi+0x6C]
        mov esi, dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x48]
        mov ebx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c6274]
        push eax
        mov eax, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ecx
        call dword ptr ds : [ebx+0x50]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x452b50)
    }
}
