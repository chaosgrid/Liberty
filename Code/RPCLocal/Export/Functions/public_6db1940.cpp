#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1940, internal_6db1940, public_6db1940);
extern "C" NAKED register_t __cdecl internal_6db1940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67b4]
        mov dword ptr ds : [public_6dbc5cc], eax
        ret 
        UNREACHABLE_TRAP(0x6db1940)
    }
}
