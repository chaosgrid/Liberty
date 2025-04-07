#include "Common-PCH.h"

PROC_DECLARE(0x6283090, internal_6283090, public_6283090);
extern "C" NAKED register_t __cdecl internal_6283090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b980]
        mov dword ptr ds : [public_63fc078], eax
        ret 
        UNREACHABLE_TRAP(0x6283090)
    }
}
