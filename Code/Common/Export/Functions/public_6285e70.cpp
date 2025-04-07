#include "Common-PCH.h"

PROC_DECLARE(0x6285e70, internal_6285e70, public_6285e70);
extern "C" NAKED register_t __cdecl internal_6285e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639bae4]
        mov dword ptr ds : [public_63fc088], eax
        ret 
        UNREACHABLE_TRAP(0x6285e70)
    }
}
