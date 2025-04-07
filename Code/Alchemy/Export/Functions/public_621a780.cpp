#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a780);

PROC_DECLARE(0x621a780, internal_621a780, public_621a780);
extern "C" NAKED register_t __cdecl internal_621a780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov edx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx+0x44]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        mov ecx, dword ptr ds : [esi+0x8C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        fstp dword ptr ds : [esi+0xA0]
        mov edx, dword ptr ss : [esp+0xC]
        xor eax, eax
        mov dword ptr ds : [esi+0xA4], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x621a780)
    }
}
