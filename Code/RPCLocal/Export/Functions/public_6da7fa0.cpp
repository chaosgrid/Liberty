#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6da7fa0);

PROC_DECLARE(0x6da7fa0, internal_6da7fa0, public_6da7fa0);
extern "C" NAKED register_t __cdecl internal_6da7fa0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db4fac
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6da7fa0)
    }
}
