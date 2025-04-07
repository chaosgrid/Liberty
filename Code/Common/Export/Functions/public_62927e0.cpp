#include "Common-PCH.h"

PROC_DECLARE(0x62927e0, internal_62927e0, public_62927e0);
extern "C" NAKED register_t __cdecl internal_62927e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639c494]
        mov dword ptr ds : [public_63fc108], eax
        ret 
        UNREACHABLE_TRAP(0x62927e0)
    }
}
