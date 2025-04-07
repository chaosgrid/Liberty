#include "EngBase-PCH.h"

PROC_DECLARE(0x66121f0, internal_66121f0, public_66121f0);
extern "C" NAKED register_t __cdecl internal_66121f0()
{
    __asm
    {
        lea eax, ds:[ecx+0x78]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+8]
        push edi
        mov esi, eax
        mov edi, dword ptr ds : [edx]
        add ecx, 0x84
        mov dword ptr ds : [esi], edi
        add eax, 0xC
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        pop esi
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x66121f0)
    }
}
