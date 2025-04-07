#include "Common-PCH.h"

PROC_DECLARE(0x6334a90, internal_6334a90, public_6334a90);
extern "C" NAKED register_t __cdecl internal_6334a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4aac]
        mov dword ptr ds : [public_658a9ac], eax
        ret 
        UNREACHABLE_TRAP(0x6334a90)
    }
}
