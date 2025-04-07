#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e3d0);

PROC_DECLARE(0x620d850, internal_620d850, public_620d850);
extern "C" NAKED register_t __cdecl internal_620d850()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e3d0
        UNREACHABLE_TRAP(0x620d850)
    }
}
