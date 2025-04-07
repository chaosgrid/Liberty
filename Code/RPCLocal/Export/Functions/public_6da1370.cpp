#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);

PROC_DECLARE(0x6da1370, internal_6da1370, public_6da1370);
extern "C" NAKED register_t __cdecl internal_6da1370()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6db4fbc
        jmp public_6d8f4c0
        UNREACHABLE_TRAP(0x6da1370)
    }
}
