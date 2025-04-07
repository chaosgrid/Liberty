#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e8ce0);

PROC_DECLARE(0x62da310, internal_62da310, public_62da310);
extern "C" NAKED register_t __cdecl internal_62da310()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0x64], 0
        mov edx, dword ptr ds : [esi+0x14]
        lea ecx, ds:[esi+0x14]
        call dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [esi+0x8C]
        lea ecx, ds:[esi+0x8C]
        call dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        add ecx, 0x18
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call public_62e8ce0
        mov dword ptr ds : [esi+0x170], 0
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62da310)
    }
}
