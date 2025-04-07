#include "Common-PCH.h"

PROC_DECLARE(0x62ad200, internal_62ad200, public_62ad200);
extern "C" NAKED register_t __cdecl internal_62ad200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e510]
        mov dword ptr ds : [public_63fc31c], eax
        ret 
        UNREACHABLE_TRAP(0x62ad200)
    }
}
