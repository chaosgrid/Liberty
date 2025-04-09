#include "FreeLancer-PCH.h"

PROC_DECLARE(0x40f4f0, internal_40f4f0, public_40f4f0);
extern "C" NAKED register_t __cdecl internal_40f4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+8]
        push esi
        lea esi, ds:[eax+4]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x34]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x40f4f0)
    }
}
