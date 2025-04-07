#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00280);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d9b0);

PROC_DECLARE(0x6cf07d0, internal_6cf07d0, public_6cf07d0);
extern "C" NAKED register_t __cdecl internal_6cf07d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d00280
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        mov ecx, eax
        call public_6d0d9b0
        ret 0x18
        UNREACHABLE_TRAP(0x6cf07d0)
    }
}
