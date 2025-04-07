#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98a10, internal_6d98a10, public_6d98a10);
extern "C" NAKED register_t __cdecl internal_6d98a10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db400c]
        mov dword ptr ds : [public_6dbbec4], eax
        ret 
        UNREACHABLE_TRAP(0x6d98a10)
    }
}
