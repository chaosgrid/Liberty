#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);

PROC_DECLARE(0x6f28dd0, internal_6f28dd0, public_6f28dd0);
extern "C" NAKED register_t __cdecl internal_6f28dd0()
{
    __asm
    {
        add ecx, 0x10C
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        call public_6f57c60
        ret 4
        UNREACHABLE_TRAP(0x6f28dd0)
    }
}
