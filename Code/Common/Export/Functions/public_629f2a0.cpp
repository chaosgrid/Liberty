#include "Common-PCH.h"

PROC_DECLARE(0x629f2a0, internal_629f2a0, public_629f2a0);
extern "C" NAKED register_t __cdecl internal_629f2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9b0]
        mov dword ptr ds : [public_63fc244], eax
        ret 
        UNREACHABLE_TRAP(0x629f2a0)
    }
}
