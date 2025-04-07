#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x6282ca0, internal_6282ca0, public_6282ca0);
extern "C" NAKED register_t __cdecl internal_6282ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6282ca0)
    }
}
