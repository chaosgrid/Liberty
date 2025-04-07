#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1900, internal_6db1900, public_6db1900);
extern "C" NAKED register_t __cdecl internal_6db1900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67a4]
        mov dword ptr ds : [public_6dbc5c4], eax
        ret 
        UNREACHABLE_TRAP(0x6db1900)
    }
}
