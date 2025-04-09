#include "FreeLancer-PCH.h"

PROC_DECLARE(0x57c330, internal_57c330, public_57c330);
extern "C" NAKED register_t __cdecl internal_57c330()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push 0
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x330], edx
        mov dword ptr ds : [esi+0x334], eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x57c330)
    }
}
