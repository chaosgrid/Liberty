#include "Common-PCH.h"

PROC_DECLARE(0x6285e50, internal_6285e50, public_6285e50);
extern "C" NAKED register_t __cdecl internal_6285e50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639bae0]
        mov dword ptr ds : [public_63fc090], eax
        ret 
        UNREACHABLE_TRAP(0x6285e50)
    }
}
