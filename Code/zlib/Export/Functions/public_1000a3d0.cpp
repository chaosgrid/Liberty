#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_1000a48e);

PROC_DECLARE(0x1000a3d0, internal_1000a3d0, public_1000a3d0);
extern "C" NAKED register_t __cdecl internal_1000a3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_1000a48e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x1000a3d0)
    }
}
