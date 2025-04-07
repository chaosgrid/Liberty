#include "Alchemy-PCH.h"

PROC_DECLARE(0x62235c0, internal_62235c0, public_62235c0);
extern "C" NAKED register_t __cdecl internal_62235c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [edx+0x50]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        xor eax, eax
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0xA0]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62235c0)
    }
}
