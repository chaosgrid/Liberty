#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da9250, internal_6da9250, public_6da9250);
extern "C" NAKED register_t __cdecl internal_6da9250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62dc]
        mov dword ptr ds : [public_6dbc15c], eax
        ret 
        UNREACHABLE_TRAP(0x6da9250)
    }
}
