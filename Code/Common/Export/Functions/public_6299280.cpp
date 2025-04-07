#include "Common-PCH.h"

PROC_DECLARE(0x6299280, internal_6299280, public_6299280);
extern "C" NAKED register_t __cdecl internal_6299280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d2a4]
        mov dword ptr ds : [public_63fc190], eax
        ret 
        UNREACHABLE_TRAP(0x6299280)
    }
}
