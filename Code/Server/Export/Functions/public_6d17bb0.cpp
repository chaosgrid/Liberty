#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

PROC_DECLARE(0x6d17bb0, internal_6d17bb0, public_6d17bb0);
extern "C" NAKED register_t __cdecl internal_6d17bb0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], ecx
        lea ecx, ss:[esp]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        push 0x1C
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call public_6d43650
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6d17bb0)
    }
}
