#include "Common-PCH.h"

PROC_DECLARE(0x6262f70, internal_6262f70, public_6262f70);
extern "C" NAKED register_t __cdecl internal_6262f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x404]
        push edi
        push eax
        add ecx, ebx
        push ecx
        call dword ptr ds : [public_6399324]
        mov esi, dword ptr ds : [ebx+0x404]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        mov ebp, ecx
        shr ecx, 2
        add esi, ebx
        mov edi, edx
        rep movsd
        mov ecx, ebp
        add esp, 8
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+edx], 0
        mov ecx, dword ptr ds : [ebx+0x404]
        pop edi
        lea edx, ds:[eax+1]
        pop esi
        add ecx, edx
        pop ebp
        mov dword ptr ds : [ebx+0x404], ecx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6262f70)
    }
}
