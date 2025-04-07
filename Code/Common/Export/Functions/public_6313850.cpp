#include "Common-PCH.h"

PROC_DECLARE(0x6313850, internal_6313850, public_6313850);
extern "C" NAKED register_t __cdecl internal_6313850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a37b4]
        mov dword ptr ds : [public_6401334], eax
        ret 
        UNREACHABLE_TRAP(0x6313850)
    }
}
