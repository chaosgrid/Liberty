#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d6700);

PROC_DECLARE(0x62cb2a0, internal_62cb2a0, public_62cb2a0);
extern "C" NAKED register_t __cdecl internal_62cb2a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        add ecx, 0x2C
        jmp public_62d6700
        UNREACHABLE_TRAP(0x62cb2a0)
    }
}
