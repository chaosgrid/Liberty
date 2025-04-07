#include "Server-PCH.h"

PROC_DECLARE(0x6d069d0, internal_6d069d0, public_6d069d0);
extern "C" NAKED register_t __cdecl internal_6d069d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67cac]
        mov dword ptr ds : [public_6d8d9c4], eax
        ret 
        UNREACHABLE_TRAP(0x6d069d0)
    }
}
