#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223dd0);

PROC_DECLARE(0x6223dd0, internal_6223dd0, public_6223dd0);
extern "C" NAKED register_t __cdecl internal_6223dd0()
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
        xor eax, eax
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [esi+0xA0]
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6223dd0)
    }
}
