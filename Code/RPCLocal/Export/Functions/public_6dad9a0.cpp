#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6dad9a0);

PROC_DECLARE(0x6dad9a0, internal_6dad9a0, public_6dad9a0);
extern "C" NAKED register_t __cdecl internal_6dad9a0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db531c
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6dad9a0)
    }
}
