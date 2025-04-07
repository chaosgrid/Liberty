#include "Common-PCH.h"

PROC_DECLARE(0x6307960, internal_6307960, public_6307960);
extern "C" NAKED register_t __cdecl internal_6307960()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [eax+4]
        push esi
        push edi
        lea esi, ds:[eax+0xC]
        mov ecx, 9
        lea edi, ss:[esp+8]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [public_6399040]
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        pop edi
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x6307960)
    }
}
