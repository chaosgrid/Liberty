#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1240, internal_6db1240, public_6db1240);
extern "C" NAKED register_t __cdecl internal_6db1240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db676c]
        mov dword ptr ds : [public_6dbc56c], eax
        ret 
        UNREACHABLE_TRAP(0x6db1240)
    }
}
