#include "Common-PCH.h"

PROC_DECLARE(0x62bef80, internal_62bef80, public_62bef80);
extern "C" NAKED register_t __cdecl internal_62bef80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ef64]
        mov dword ptr ds : [public_63fc4ec], eax
        ret 
        UNREACHABLE_TRAP(0x62bef80)
    }
}
