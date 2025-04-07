#include "Common-PCH.h"

PROC_DECLARE(0x631d600, internal_631d600, public_631d600);
extern "C" NAKED register_t __cdecl internal_631d600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3bf0]
        mov dword ptr ds : [public_6401804], eax
        ret 
        UNREACHABLE_TRAP(0x631d600)
    }
}
