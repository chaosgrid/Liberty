#include "Common-PCH.h"

PROC_DECLARE(0x6262e70, internal_6262e70, public_6262e70);
extern "C" NAKED register_t __cdecl internal_6262e70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov ecx, edx
        mov ebx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [edx+eax], 0
        pop esi
        mov dword ptr ds : [eax+0x400], edx
        mov dword ptr ds : [eax+0x404], 0
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6262e70)
    }
}
