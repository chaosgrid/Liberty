#include "FreeLancer-PCH.h"

PROC_DECLARE(0x59d540, internal_59d540, public_59d540);
extern "C" NAKED register_t __cdecl internal_59d540()
{
    __asm
    {
        mov dword ptr ds : [public_67dbcc], 0
        mov dword ptr ds : [public_67dbd0], 0
        mov dword ptr ds : [public_67dbd4], 0xBF800000
        ret 
        UNREACHABLE_TRAP(0x59d540)
    }
}
