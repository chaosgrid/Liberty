#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44fd00);

PROC_DECLARE(0x4371e0, internal_4371e0, public_4371e0);
extern "C" NAKED register_t __cdecl internal_4371e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push eax
        push ecx
        push edx
        call public_44fd00
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x4371e0)
    }
}
