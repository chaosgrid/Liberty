#include "Server-PCH.h"

PROC_DECLARE(0x6ce14f0, internal_6ce14f0, public_6ce14f0);
extern "C" NAKED register_t __cdecl internal_6ce14f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        push esi
        push edi
        lea ecx, ds:[edx+4]
        mov edi, dword ptr ds : [ecx]
        lea esi, ds:[eax+4]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [eax+0x18], ecx
        lea esi, ds:[edx+0x1C]
        lea edi, ds:[eax+0x1C]
        mov ecx, 0x10
        rep movsd
        lea esi, ds:[edx+0x5C]
        lea edi, ds:[eax+0x5C]
        mov ecx, 0x20
        rep movsd
        pop edi
        mov dword ptr ds : [eax], offset public_6d64ef0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce14f0)
    }
}
