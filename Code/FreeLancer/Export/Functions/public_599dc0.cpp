#include "FreeLancer-PCH.h"

PROC_DECLARE(0x599dc0, internal_599dc0, public_599dc0);
extern "C" NAKED register_t __cdecl internal_599dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dba5]
        and eax, 0xFF808080
        or eax, 0x808080
        mov byte ptr ds : [public_67dba4], 8
        mov dword ptr ds : [public_67dba5], eax
        ret 
        UNREACHABLE_TRAP(0x599dc0)
    }
}
