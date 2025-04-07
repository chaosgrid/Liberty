#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee80);

PROC_DECLARE(0x622e300, internal_622e300, public_622e300);
extern "C" NAKED register_t __cdecl internal_622e300()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ee80
        UNREACHABLE_TRAP(0x622e300)
    }
}
