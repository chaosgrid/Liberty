#include "Common-PCH.h"

PROC_DECLARE(0x62a8b70, internal_62a8b70, public_62a8b70);
extern "C" NAKED register_t __cdecl internal_62a8b70()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e0d0
        mov ecx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [edx+0x10]
        push esi
        mov dword ptr ds : [eax+0x10], ecx
        push edi
        lea ecx, ds:[edx+0x14]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x14]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea esi, ds:[edx+0x20]
        lea edi, ds:[eax+0x20]
        mov ecx, 9
        rep movsd
        mov dl, byte ptr ds : [edx+0x44]
        pop edi
        mov byte ptr ds : [eax+0x44], dl
        mov dword ptr ds : [eax], offset public_639e134
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8b70)
    }
}
