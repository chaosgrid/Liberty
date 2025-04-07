#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6d45810, internal_6d45810, public_6d45810);
extern "C" NAKED register_t __cdecl internal_6d45810()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp]
        push edx
        push 0x24
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ecx
        call public_6d43650
        inc dword ptr ds : [public_6d8f9b4]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d45810)
    }
}
