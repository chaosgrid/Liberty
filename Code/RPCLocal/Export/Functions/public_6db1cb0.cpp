#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1cb0, internal_6db1cb0, public_6db1cb0);
extern "C" NAKED register_t __cdecl internal_6db1cb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67ec]
        mov dword ptr ds : [public_6dbc624], eax
        ret 
        UNREACHABLE_TRAP(0x6db1cb0)
    }
}
