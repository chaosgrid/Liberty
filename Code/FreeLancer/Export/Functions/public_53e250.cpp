#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ae40);

PROC_DECLARE(0x53e250, internal_53e250, public_53e250);
extern "C" NAKED register_t __cdecl internal_53e250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_46ae40
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x53e250)
    }
}
