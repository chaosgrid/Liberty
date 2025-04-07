#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97b50, internal_6d97b50, public_6d97b50);
extern "C" NAKED register_t __cdecl internal_6d97b50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f88]
        mov dword ptr ds : [public_6dbbe94], eax
        ret 
        UNREACHABLE_TRAP(0x6d97b50)
    }
}
