#include "Common-PCH.h"

PROC_DECLARE(0x6341650, internal_6341650, public_6341650);
extern "C" NAKED register_t __cdecl internal_6341650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a5330]
        mov dword ptr ds : [public_658a9dc], eax
        ret 
        UNREACHABLE_TRAP(0x6341650)
    }
}
