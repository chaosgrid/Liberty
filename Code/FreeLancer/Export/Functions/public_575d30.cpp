#include "FreeLancer-PCH.h"

PROC_DECLARE(0x575d30, internal_575d30, public_575d30);
extern "C" NAKED register_t __cdecl internal_575d30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4268]
        mov dword ptr ds : [public_67c29c], eax
        ret 
        UNREACHABLE_TRAP(0x575d30)
    }
}
