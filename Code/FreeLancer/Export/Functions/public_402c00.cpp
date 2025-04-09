#include "FreeLancer-PCH.h"

PROC_DECLARE(0x402c00, internal_402c00, public_402c00);
extern "C" NAKED register_t __cdecl internal_402c00()
{
    __asm
    {
        mov dword ptr ds : [public_61648c], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x402c00)
    }
}
