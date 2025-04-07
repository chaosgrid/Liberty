#include "Alchemy-PCH.h"

PROC_DECLARE(0x6219f40, internal_6219f40, public_6219f40);
extern "C" NAKED register_t __cdecl internal_6219f40()
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
        fstp dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xA4], eax
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6219f40)
    }
}
