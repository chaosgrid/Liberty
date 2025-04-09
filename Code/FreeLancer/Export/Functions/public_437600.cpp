#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4320);

PROC_DECLARE(0x437600, internal_437600, public_437600);
extern "C" NAKED register_t __cdecl internal_437600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        call public_4c4320
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x437600)
    }
}
