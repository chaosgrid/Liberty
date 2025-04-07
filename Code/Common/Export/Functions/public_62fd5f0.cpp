#include "Common-PCH.h"

PROC_DECLARE(0x62fd5f0, internal_62fd5f0, public_62fd5f0);
extern "C" NAKED register_t __cdecl internal_62fd5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2270]
        mov dword ptr ds : [public_63fcb40], eax
        ret 
        UNREACHABLE_TRAP(0x62fd5f0)
    }
}
