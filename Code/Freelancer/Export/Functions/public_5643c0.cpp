#include "Freelancer-PCH.h"

PROC_DECLARE(0x5643c0, internal_5643c0, public_5643c0);
extern "C" NAKED register_t __cdecl internal_5643c0()
{
    __asm
    {
        sub esp, 0x10
        xor eax, eax
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+8], edx
        lea edx, ss:[esp]
        push edx
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_5c6eb0]
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x5643c0)
    }
}
