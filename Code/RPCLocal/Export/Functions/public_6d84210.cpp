#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84210);

PROC_DECLARE(0x6d84210, internal_6d84210, public_6d84210);
extern "C" NAKED register_t __cdecl internal_6d84210()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        ret 
        UNREACHABLE_TRAP(0x6d84210)
    }
}
