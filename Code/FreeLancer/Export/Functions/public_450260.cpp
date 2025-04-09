#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450180);

PROC_DECLARE(0x450260, internal_450260, public_450260);
extern "C" NAKED register_t __cdecl internal_450260()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x10
        jmp public_450180
        UNREACHABLE_TRAP(0x450260)
    }
}
