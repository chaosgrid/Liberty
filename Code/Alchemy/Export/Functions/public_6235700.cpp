#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6233170);
CLANG_FORWARD_PROC_SYMBOL(public_6235700);

PROC_DECLARE(0x6235700, internal_6235700, public_6235700);
extern "C" NAKED register_t __cdecl internal_6235700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6233170
        UNREACHABLE_TRAP(0x6235700)
    }
}
