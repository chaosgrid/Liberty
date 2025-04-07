#include "Server-PCH.h"

PROC_DECLARE(0x6d5f910, internal_6d5f910, public_6d5f910);
extern "C" NAKED register_t __cdecl internal_6d5f910()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp]
        push ecx
        mov dword ptr ss : [esp+4], offset public_6d6bb34
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_6d6488c]
        xor eax, eax
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d5f910)
    }
}
