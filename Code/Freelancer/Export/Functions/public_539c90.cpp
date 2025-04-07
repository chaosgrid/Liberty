#include "Freelancer-PCH.h"

PROC_DECLARE(0x539c90, internal_539c90, public_539c90);
extern "C" NAKED register_t __cdecl internal_539c90()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push esi
        push ebp
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x1A0]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        push ebp
        push edi
        push ebx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1AC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x539c90)
    }
}
