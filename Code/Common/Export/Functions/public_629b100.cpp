#include "Common-PCH.h"

PROC_DECLARE(0x629b100, internal_629b100, public_629b100);
extern "C" NAKED register_t __cdecl internal_629b100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d4f8]
        mov dword ptr ds : [public_63fc1e8], eax
        ret 
        UNREACHABLE_TRAP(0x629b100)
    }
}
