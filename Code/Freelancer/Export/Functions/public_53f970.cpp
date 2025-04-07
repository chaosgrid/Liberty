#include "Freelancer-PCH.h"

PROC_DECLARE(0x53f970, internal_53f970, public_53f970);
extern "C" NAKED register_t __cdecl internal_53f970()
{
    __asm
    {
        mov eax, ecx
        mov edx, dword ptr ss : [esp+4]
        push esi
        push edi
        lea esi, ds:[edx+8]
        lea edi, ds:[eax+8]
        mov ecx, 9
        rep movsd
        lea esi, ds:[edx+0x30]
        lea edi, ds:[eax+0x30]
        mov ecx, 6
        rep movsd
        lea ecx, ds:[edx+0x48]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x48]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x54]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x54]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x60]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x60]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x6C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x6C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x78]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x78]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x84]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x84]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x90]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x90]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0x9C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x9C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        lea ecx, ds:[edx+0xA8]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0xA8]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [edx+0xB4]
        mov dword ptr ds : [eax+0xB4], ecx
        mov ecx, dword ptr ds : [edx+0xB8]
        mov dword ptr ds : [eax+0xB8], ecx
        mov ecx, dword ptr ds : [edx+0xBC]
        mov dword ptr ds : [eax+0xBC], ecx
        mov ecx, dword ptr ds : [edx+0xC0]
        mov dword ptr ds : [eax+0xC0], ecx
        mov ecx, dword ptr ds : [edx+0xC4]
        mov dword ptr ds : [eax+0xC4], ecx
        mov ecx, dword ptr ds : [edx+0xC8]
        mov dword ptr ds : [eax+0xC8], ecx
        mov edx, dword ptr ds : [edx+0xCC]
        pop edi
        mov dword ptr ds : [eax+0xCC], edx
        mov dword ptr ds : [eax], offset public_5df894
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x53f970)
    }
}
