#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51ec50, internal_51ec50, public_51ec50);
extern "C" NAKED register_t __cdecl internal_51ec50()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_675340], 0xC
        mov dword ptr ds : [public_675344], eax
        mov dword ptr ds : [public_675348], 0xFFFFFFFF
        mov dword ptr ds : [public_67534c], eax
        ret 
        UNREACHABLE_TRAP(0x51ec50)
    }
}
