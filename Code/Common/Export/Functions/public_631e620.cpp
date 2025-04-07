#include "Common-PCH.h"

PROC_DECLARE(0x631e620, internal_631e620, public_631e620);
extern "C" NAKED register_t __cdecl internal_631e620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        sub ecx, edi
        mov ebx, eax
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [ebx+4], esi
        inc ecx
        sub edx, esi
        pop edi
        mov dword ptr ds : [ebx+8], ecx
        inc edx
        pop esi
        mov dword ptr ds : [ebx+0xC], edx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631e620)
    }
}
