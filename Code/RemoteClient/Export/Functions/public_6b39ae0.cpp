#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

PROC_DECLARE(0x6b39ae0, internal_6b39ae0, public_6b39ae0);
extern "C" NAKED register_t __cdecl internal_6b39ae0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx+8]
        lea eax, ss:[esp]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, eax
        and edx, 0xFFF
        push edx
        shr eax, 0x10
        push eax
        mov dword ptr ss : [esp+0xC], 0
        call public_6b3b480
        mov eax, dword ptr ss : [esp]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b39ae0)
    }
}
