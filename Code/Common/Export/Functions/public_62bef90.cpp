#include "Common-PCH.h"

PROC_DECLARE(0x62bef90, internal_62bef90, public_62bef90);
extern "C" NAKED register_t __cdecl internal_62bef90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ef68]
        mov dword ptr ds : [public_63fc4e8], eax
        ret 
        UNREACHABLE_TRAP(0x62bef90)
    }
}
