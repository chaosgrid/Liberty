#include "Common-PCH.h"

PROC_DECLARE(0x6302820, internal_6302820, public_6302820);
extern "C" NAKED register_t __cdecl internal_6302820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a2650]
        mov dword ptr ds : [public_63fcc70], eax
        ret 
        UNREACHABLE_TRAP(0x6302820)
    }
}
