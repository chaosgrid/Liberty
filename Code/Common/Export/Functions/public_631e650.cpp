#include "Common-PCH.h"

PROC_DECLARE(0x631e650, internal_631e650, public_631e650);
extern "C" NAKED register_t __cdecl internal_631e650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3cd0]
        mov dword ptr ds : [public_6401930], eax
        ret 
        UNREACHABLE_TRAP(0x631e650)
    }
}
