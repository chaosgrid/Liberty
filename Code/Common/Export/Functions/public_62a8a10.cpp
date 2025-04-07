#include "Common-PCH.h"

PROC_DECLARE(0x62a8a10, internal_62a8a10, public_62a8a10);
extern "C" NAKED register_t __cdecl internal_62a8a10()
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
        push esi
        push edi
        lea ecx, ds:[edx+0x10]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x10]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [eax+0x1C], ecx
        lea esi, ds:[edx+0x20]
        lea edi, ds:[eax+0x20]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [edx+0x50]
        mov dword ptr ds : [eax+0x50], ecx
        mov ecx, dword ptr ds : [edx+0x54]
        mov dword ptr ds : [eax+0x54], ecx
        mov cl, byte ptr ds : [edx+0x58]
        mov byte ptr ds : [eax+0x58], cl
        mov cl, byte ptr ds : [edx+0x59]
        mov byte ptr ds : [eax+0x59], cl
        mov cl, byte ptr ds : [edx+0x5A]
        mov byte ptr ds : [eax+0x5A], cl
        mov cl, byte ptr ds : [edx+0x5B]
        mov byte ptr ds : [eax+0x5B], cl
        mov ecx, dword ptr ds : [edx+0x5C]
        mov dword ptr ds : [eax+0x5C], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [eax+0x60], ecx
        mov ecx, dword ptr ds : [edx+0x64]
        mov dword ptr ds : [eax+0x64], ecx
        mov ecx, dword ptr ds : [edx+0x68]
        mov dword ptr ds : [eax+0x68], ecx
        mov dl, byte ptr ds : [edx+0x6C]
        pop edi
        mov byte ptr ds : [eax+0x6C], dl
        mov dword ptr ds : [eax], offset public_639e114
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8a10)
    }
}
