#include "Common-PCH.h"

PROC_DECLARE(0x62e6230, internal_62e6230, public_62e6230);
extern "C" NAKED register_t __cdecl internal_62e6230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0790]
        mov dword ptr ds : [public_63fca54], eax
        ret 
        UNREACHABLE_TRAP(0x62e6230)
    }
}
