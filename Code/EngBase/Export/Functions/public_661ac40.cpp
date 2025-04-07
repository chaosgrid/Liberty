#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a980);

PROC_DECLARE(0x661ac40, internal_661ac40, public_661ac40);
extern "C" NAKED register_t __cdecl internal_661ac40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_661a980
        UNREACHABLE_TRAP(0x661ac40)
    }
}
