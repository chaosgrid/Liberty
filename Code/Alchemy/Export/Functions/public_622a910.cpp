#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62274b0);
CLANG_FORWARD_PROC_SYMBOL(public_622a910);

PROC_DECLARE(0x622a910, internal_622a910, public_622a910);
extern "C" NAKED register_t __cdecl internal_622a910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62274b0
        UNREACHABLE_TRAP(0x622a910)
    }
}
