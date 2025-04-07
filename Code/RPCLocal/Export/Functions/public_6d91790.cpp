#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91790, internal_6d91790, public_6d91790);
extern "C" NAKED register_t __cdecl internal_6d91790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d28]
        mov dword ptr ds : [public_6dbbdc8], eax
        ret 
        UNREACHABLE_TRAP(0x6d91790)
    }
}
