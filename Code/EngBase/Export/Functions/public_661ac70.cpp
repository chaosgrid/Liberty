#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a980);

PROC_DECLARE(0x661ac70, internal_661ac70, public_661ac70);
extern "C" NAKED register_t __cdecl internal_661ac70()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_661a980
        UNREACHABLE_TRAP(0x661ac70)
    }
}
