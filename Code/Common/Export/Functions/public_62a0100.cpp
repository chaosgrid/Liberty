#include "Common-PCH.h"

PROC_DECLARE(0x62a0100, internal_62a0100, public_62a0100);
extern "C" NAKED register_t __cdecl internal_62a0100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d9c0]
        mov dword ptr ds : [public_63fc264], eax
        ret 
        UNREACHABLE_TRAP(0x62a0100)
    }
}
