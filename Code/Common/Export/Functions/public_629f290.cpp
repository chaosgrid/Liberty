#include "Common-PCH.h"

PROC_DECLARE(0x629f290, internal_629f290, public_629f290);
extern "C" NAKED register_t __cdecl internal_629f290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9b0]
        mov dword ptr ds : [public_63fc248], eax
        ret 
        UNREACHABLE_TRAP(0x629f290)
    }
}
