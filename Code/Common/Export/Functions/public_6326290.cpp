#include "Common-PCH.h"

PROC_DECLARE(0x6326290, internal_6326290, public_6326290);
extern "C" NAKED register_t __cdecl internal_6326290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_640957d]
        or eax, 0xFFFFFF
        mov byte ptr ds : [public_640957c], 0
        mov dword ptr ds : [public_640957d], eax
        ret 
        UNREACHABLE_TRAP(0x6326290)
    }
}
