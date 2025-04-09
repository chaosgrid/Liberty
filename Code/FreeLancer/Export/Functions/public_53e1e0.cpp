#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ad60);

PROC_DECLARE(0x53e1e0, internal_53e1e0, public_53e1e0);
extern "C" NAKED register_t __cdecl internal_53e1e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_46ad60
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x53e1e0)
    }
}
