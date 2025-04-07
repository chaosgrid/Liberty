#include "Common-PCH.h"

PROC_DECLARE(0x627cc20, internal_627cc20, public_627cc20);
extern "C" NAKED register_t __cdecl internal_627cc20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        push ebx
        mov dword ptr ds : [eax+4], ecx
        push ebp
        push esi
        push edi
        lea ebx, ds:[edx+8]
        lea ebp, ds:[eax+8]
        mov esi, ebx
        mov edi, ebp
        mov ecx, 9
        rep movsd
        lea ecx, ds:[edx+0x2C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x2C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        mov esi, ebx
        mov edi, ebp
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [eax+0x38], ecx
        lea ecx, ds:[edx+0x3C]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+0x3C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        pop edi
        mov dword ptr ds : [esi+8], ecx
        mov edx, dword ptr ds : [edx+0x48]
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x48], edx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x627cc20)
    }
}
