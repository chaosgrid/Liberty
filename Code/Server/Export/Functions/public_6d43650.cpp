#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);
CLANG_FORWARD_PROC_SYMBOL(public_6d44080);

PROC_DECLARE(0x6d43650, internal_6d43650, public_6d43650);
extern "C" NAKED register_t __cdecl internal_6d43650()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        call public_6d44080
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d43650)
    }
}
