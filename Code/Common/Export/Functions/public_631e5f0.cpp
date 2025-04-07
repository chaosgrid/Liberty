#include "Common-PCH.h"

PROC_DECLARE(0x631e5f0, internal_631e5f0, public_631e5f0);
extern "C" NAKED register_t __cdecl internal_631e5f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        push edi
        lea edi, ds:[eax+edx-1]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, eax
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], edx
        lea esi, ds:[esi+ecx-1]
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], edi
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631e5f0)
    }
}
