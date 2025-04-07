#include "Common-PCH.h"

PROC_DECLARE(0x62bbb10, internal_62bbb10, public_62bbb10);
extern "C" NAKED register_t __cdecl internal_62bbb10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ed20]
        mov dword ptr ds : [public_63fc4a4], eax
        ret 
        UNREACHABLE_TRAP(0x62bbb10)
    }
}
