#include "Common-PCH.h"

PROC_DECLARE(0x6285e60, internal_6285e60, public_6285e60);
extern "C" NAKED register_t __cdecl internal_6285e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639bae0]
        mov dword ptr ds : [public_63fc08c], eax
        ret 
        UNREACHABLE_TRAP(0x6285e60)
    }
}
