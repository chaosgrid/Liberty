#include "FLServer-PCH.h"

PROC_DECLARE(0x40b240, internal_40b240, public_40b240);
extern "C" NAKED register_t __cdecl internal_40b240()
{
    __asm
    {
        mov dword ptr ds : [public_427810], offset public_41d030
        ret 
        UNREACHABLE_TRAP(0x40b240)
    }
}
