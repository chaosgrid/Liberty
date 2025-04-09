#include "FreeLancer-PCH.h"

PROC_DECLARE(0x599a90, internal_599a90, public_599a90);
extern "C" NAKED register_t __cdecl internal_599a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e57bc]
        mov dword ptr ds : [public_67dbbc], eax
        ret 
        UNREACHABLE_TRAP(0x599a90)
    }
}
