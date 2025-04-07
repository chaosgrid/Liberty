#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d200);

PROC_DECLARE(0x6f4d200, internal_6f4d200, public_6f4d200);
extern "C" NAKED register_t __cdecl internal_6f4d200()
{
    __asm
    {
        call dword ptr ds : [public_6fb3370]
        imul eax, dword ptr ss : [esp+4]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        ret 
        UNREACHABLE_TRAP(0x6f4d200)
    }
}
