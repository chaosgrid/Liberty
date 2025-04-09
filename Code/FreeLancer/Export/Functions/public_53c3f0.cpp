#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a380);

PROC_DECLARE(0x53c3f0, internal_53c3f0, public_53c3f0);
extern "C" NAKED register_t __cdecl internal_53c3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        call public_48a380
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x53c3f0)
    }
}
