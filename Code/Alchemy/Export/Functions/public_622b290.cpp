#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a940);

PROC_DECLARE(0x622b290, internal_622b290, public_622b290);
extern "C" NAKED register_t __cdecl internal_622b290()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622a940
        UNREACHABLE_TRAP(0x622b290)
    }
}
