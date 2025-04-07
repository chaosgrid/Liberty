#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344000);
CLANG_FORWARD_PROC_SYMBOL(public_6344150);

PROC_DECLARE(0x6344000, internal_6344000, public_6344000);
extern "C" NAKED register_t __cdecl internal_6344000()
{
    __asm
    {
        jmp public_6344150
        UNREACHABLE_TRAP(0x6344000)
    }
}
