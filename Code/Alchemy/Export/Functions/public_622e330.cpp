#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee90);

PROC_DECLARE(0x622e330, internal_622e330, public_622e330);
extern "C" NAKED register_t __cdecl internal_622e330()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ee90
        UNREACHABLE_TRAP(0x622e330)
    }
}
