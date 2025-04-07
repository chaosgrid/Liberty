#include "Common-PCH.h"

PROC_DECLARE(0x6295240, internal_6295240, public_6295240);
extern "C" NAKED register_t __cdecl internal_6295240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639cca4]
        mov dword ptr ds : [public_63fc130], eax
        ret 
        UNREACHABLE_TRAP(0x6295240)
    }
}
