#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1270, internal_6db1270, public_6db1270);
extern "C" NAKED register_t __cdecl internal_6db1270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6774]
        mov dword ptr ds : [public_6dbc584], eax
        ret 
        UNREACHABLE_TRAP(0x6db1270)
    }
}
