#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4d5b80, internal_4d5b80, public_4d5b80);
extern "C" NAKED register_t __cdecl internal_4d5b80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7e94]
        mov dword ptr ds : [public_6749c8], eax
        ret 
        UNREACHABLE_TRAP(0x4d5b80)
    }
}
