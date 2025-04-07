#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1250);

PROC_DECLARE(0x6db1250, internal_6db1250, public_6db1250);
extern "C" NAKED register_t __cdecl internal_6db1250()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db5d74
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6db1250)
    }
}
