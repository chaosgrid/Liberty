#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da4f50, internal_6da4f50, public_6da4f50);
extern "C" NAKED register_t __cdecl internal_6da4f50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6108]
        mov dword ptr ds : [public_6dbbf8c], eax
        ret 
        UNREACHABLE_TRAP(0x6da4f50)
    }
}
