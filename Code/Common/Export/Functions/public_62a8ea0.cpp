#include "Common-PCH.h"

PROC_DECLARE(0x62a8ea0, internal_62a8ea0, public_62a8ea0);
extern "C" NAKED register_t __cdecl internal_62a8ea0()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e0d0
        mov ecx, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0xC], offset public_639e0d0
        mov ecx, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [eax+0x18], ecx
        push esi
        push edi
        lea ecx, ds:[edx+0x1C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x1C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0x28]
        mov dword ptr ds : [eax+0x28], ecx
        lea esi, ds:[edx+0x2C]
        lea edi, ds:[eax+0x2C]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [edx+0x5C]
        mov dword ptr ds : [eax+0x5C], ecx
        mov ecx, dword ptr ds : [edx+0x60]
        mov dword ptr ds : [eax+0x60], ecx
        mov cl, byte ptr ds : [edx+0x64]
        mov byte ptr ds : [eax+0x64], cl
        mov cl, byte ptr ds : [edx+0x65]
        mov byte ptr ds : [eax+0x65], cl
        mov cl, byte ptr ds : [edx+0x66]
        mov byte ptr ds : [eax+0x66], cl
        mov cl, byte ptr ds : [edx+0x67]
        mov byte ptr ds : [eax+0x67], cl
        mov ecx, dword ptr ds : [edx+0x68]
        mov dword ptr ds : [eax+0x68], ecx
        mov ecx, dword ptr ds : [edx+0x6C]
        mov dword ptr ds : [eax+0x6C], ecx
        mov ecx, dword ptr ds : [edx+0x70]
        mov dword ptr ds : [eax+0x70], ecx
        mov ecx, dword ptr ds : [edx+0x74]
        mov dword ptr ds : [eax+0x74], ecx
        mov cl, byte ptr ds : [edx+0x78]
        mov byte ptr ds : [eax+0x78], cl
        mov dword ptr ds : [eax+0xC], offset public_639e114
        mov ecx, dword ptr ds : [edx+0x80]
        mov dword ptr ds : [eax+0x80], ecx
        mov ecx, dword ptr ds : [edx+0x84]
        mov dword ptr ds : [eax+0x84], ecx
        mov dword ptr ds : [eax+0x7C], offset public_639e0d0
        mov ecx, dword ptr ds : [edx+0x88]
        mov dword ptr ds : [eax+0x88], ecx
        mov ecx, dword ptr ds : [edx+0x8C]
        mov dword ptr ds : [eax+0x8C], ecx
        lea ecx, ds:[edx+0x90]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x90]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0x9C]
        mov dword ptr ds : [eax+0x9C], ecx
        mov dword ptr ds : [eax+0x7C], offset public_639e11c
        mov cl, byte ptr ds : [edx+0xA0]
        mov byte ptr ds : [eax+0xA0], cl
        mov ecx, dword ptr ds : [edx+0xA4]
        mov dword ptr ds : [eax+0xA4], ecx
        mov ecx, dword ptr ds : [edx+0xA8]
        mov dword ptr ds : [eax+0xA8], ecx
        mov ecx, dword ptr ds : [edx+0xAC]
        mov dword ptr ds : [eax+0xAC], ecx
        mov ecx, dword ptr ds : [edx+0xB0]
        mov dword ptr ds : [eax+0xB0], ecx
        mov ecx, dword ptr ds : [edx+0xB4]
        mov dword ptr ds : [eax+0xB4], ecx
        mov edx, dword ptr ds : [edx+0xB8]
        pop edi
        mov dword ptr ds : [eax+0xB8], edx
        mov dword ptr ds : [eax], offset public_639e1a4
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8ea0)
    }
}
