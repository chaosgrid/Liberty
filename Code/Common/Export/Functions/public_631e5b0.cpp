#include "Common-PCH.h"

PROC_DECLARE(0x631e5b0, internal_631e5b0, public_631e5b0);
extern "C" NAKED register_t __cdecl internal_631e5b0()
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
        mov ebx, eax
        mov dword ptr ds : [ebx], edi
        sub ecx, edi
        mov dword ptr ds : [ebx+4], esi
        sub edx, esi
        add ecx, 2
        pop edi
        mov dword ptr ds : [ebx+8], ecx
        add edx, 2
        pop esi
        mov dword ptr ds : [ebx+0xC], edx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631e5b0)
    }
}
