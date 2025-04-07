#include "Common-PCH.h"

PROC_DECLARE(0x6313840, internal_6313840, public_6313840);
extern "C" NAKED register_t __cdecl internal_6313840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37b0]
        mov dword ptr ds : [public_6401338], eax
        ret 
        UNREACHABLE_TRAP(0x6313840)
    }
}
