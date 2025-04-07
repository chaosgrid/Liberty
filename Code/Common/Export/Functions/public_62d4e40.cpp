#include "Common-PCH.h"

PROC_DECLARE(0x62d4e40, internal_62d4e40, public_62d4e40);
extern "C" NAKED register_t __cdecl internal_62d4e40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a03fc]
        mov dword ptr ds : [public_63fc968], eax
        ret 
        UNREACHABLE_TRAP(0x62d4e40)
    }
}
