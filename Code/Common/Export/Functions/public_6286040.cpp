#include "Common-PCH.h"

PROC_DECLARE(0x6286040, internal_6286040, public_6286040);
extern "C" NAKED register_t __cdecl internal_6286040()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639baf4]
        mov dword ptr ds : [public_63fc0ac], eax
        ret 
        UNREACHABLE_TRAP(0x6286040)
    }
}
