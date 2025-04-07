#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c60);

PROC_DECLARE(0x6235170, internal_6235170, public_6235170);
extern "C" NAKED register_t __cdecl internal_6235170()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235c60
        UNREACHABLE_TRAP(0x6235170)
    }
}
