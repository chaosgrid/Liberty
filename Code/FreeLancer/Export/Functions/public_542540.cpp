#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542540, internal_542540, public_542540);
extern "C" NAKED register_t __cdecl internal_542540()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df8c8]
        mov dword ptr ds : [public_678af8], eax
        ret 
        UNREACHABLE_TRAP(0x542540)
    }
}
