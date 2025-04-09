#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453660, internal_453660, public_453660);
extern "C" NAKED register_t __cdecl internal_453660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd790]
        mov dword ptr ds : [public_66d288], eax
        ret 
        UNREACHABLE_TRAP(0x453660)
    }
}
