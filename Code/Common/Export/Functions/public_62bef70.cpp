#include "Common-PCH.h"

PROC_DECLARE(0x62bef70, internal_62bef70, public_62bef70);
extern "C" NAKED register_t __cdecl internal_62bef70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ef64]
        mov dword ptr ds : [public_63fc4f0], eax
        ret 
        UNREACHABLE_TRAP(0x62bef70)
    }
}
