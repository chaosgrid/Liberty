#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a150);

PROC_DECLARE(0x5a6250, internal_5a6250, public_5a6250);
extern "C" NAKED register_t __cdecl internal_5a6250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        call public_46a150
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x5a6250)
    }
}
