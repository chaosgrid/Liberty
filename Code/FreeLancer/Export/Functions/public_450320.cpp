#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x450320, internal_450320, public_450320);
extern "C" NAKED register_t __cdecl internal_450320()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x20
        jmp public_450180
        UNREACHABLE_TRAP(0x450320)
    }
}
