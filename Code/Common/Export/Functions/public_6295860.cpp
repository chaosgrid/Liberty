#include "Common-PCH.h"

PROC_DECLARE(0x6295860, internal_6295860, public_6295860);
extern "C" NAKED register_t __cdecl internal_6295860()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ce28]
        mov dword ptr ds : [public_63fc13c], eax
        ret 
        UNREACHABLE_TRAP(0x6295860)
    }
}
