#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d931e0);

PROC_DECLARE(0x6d931e0, internal_6d931e0, public_6d931e0);
extern "C" NAKED register_t __cdecl internal_6d931e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6d931e0)
    }
}
