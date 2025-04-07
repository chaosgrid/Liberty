#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6cf12e0, internal_6cf12e0, public_6cf12e0);
extern "C" NAKED register_t __cdecl internal_6cf12e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp], ecx
        lea ecx, ss:[esp]
        push ecx
        push 3
        mov dword ptr ss : [esp+0xC], eax
        call public_6d43650
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6cf12e0)
    }
}
