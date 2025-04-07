#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6dae240);

PROC_DECLARE(0x6dae240, internal_6dae240, public_6dae240);
extern "C" NAKED register_t __cdecl internal_6dae240()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db5b14
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6dae240)
    }
}
