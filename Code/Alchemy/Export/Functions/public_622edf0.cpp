#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622edf0);
CLANG_FORWARD_PROC_SYMBOL(public_6244580);

PROC_DECLARE(0x622edf0, internal_622edf0, public_622edf0);
extern "C" NAKED register_t __cdecl internal_622edf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244580
        UNREACHABLE_TRAP(0x622edf0)
    }
}
