#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213690);

PROC_DECLARE(0x6213c20, internal_6213c20, public_6213c20);
extern "C" NAKED register_t __cdecl internal_6213c20()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213690
        UNREACHABLE_TRAP(0x6213c20)
    }
}
