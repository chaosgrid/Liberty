#include "Common-PCH.h"

PROC_DECLARE(0x631e580, internal_631e580, public_631e580);
extern "C" NAKED register_t __cdecl internal_631e580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        lea esi, ds:[edx+ecx-2]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0xC]
        push edi
        lea edi, ds:[eax+edx-2]
        mov eax, dword ptr ss : [esp+0x10]
        mov ebx, eax
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], edi
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631e580)
    }
}
