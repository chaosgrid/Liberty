#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f55840);

PROC_DECLARE(0x6f55840, internal_6f55840, public_6f55840);
extern "C" NAKED register_t __cdecl internal_6f55840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_6f4b840
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f4b3b0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f55840)
    }
}
