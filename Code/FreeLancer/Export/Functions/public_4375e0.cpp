#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4170);

PROC_DECLARE(0x4375e0, internal_4375e0, public_4375e0);
extern "C" NAKED register_t __cdecl internal_4375e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_4c4170
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x4375e0)
    }
}
