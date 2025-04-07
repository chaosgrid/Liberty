#include "Common-PCH.h"

PROC_DECLARE(0x6286020, internal_6286020, public_6286020);
extern "C" NAKED register_t __cdecl internal_6286020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639baf0]
        mov dword ptr ds : [public_63fc0b4], eax
        ret 
        UNREACHABLE_TRAP(0x6286020)
    }
}
