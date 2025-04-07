#include "Common-PCH.h"

PROC_DECLARE(0x62a8ab0, internal_62a8ab0, public_62a8ab0);
extern "C" NAKED register_t __cdecl internal_62a8ab0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_639e0d0
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        push esi
        mov dword ptr ds : [eax+0x10], edx
        push edi
        lea edx, ds:[ecx+0x14]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x14]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ecx+0x20]
        pop edi
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax], offset public_639e11c
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8ab0)
    }
}
