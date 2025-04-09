#include "FreeLancer-PCH.h"

PROC_DECLARE(0x538370, internal_538370, public_538370);
extern "C" NAKED register_t __cdecl internal_538370()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67556c], eax
        mov dword ptr ds : [public_675574], eax
        mov dword ptr ds : [public_675570], eax
        ret 
        UNREACHABLE_TRAP(0x538370)
    }
}
