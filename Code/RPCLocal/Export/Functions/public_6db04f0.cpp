#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db04f0, internal_6db04f0, public_6db04f0);
extern "C" NAKED register_t __cdecl internal_6db04f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6754]
        mov dword ptr ds : [public_6dbc54c], eax
        ret 
        UNREACHABLE_TRAP(0x6db04f0)
    }
}
