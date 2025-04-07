#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a980);

PROC_DECLARE(0x661aca0, internal_661aca0, public_661aca0);
extern "C" NAKED register_t __cdecl internal_661aca0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_661a980
        UNREACHABLE_TRAP(0x661aca0)
    }
}
