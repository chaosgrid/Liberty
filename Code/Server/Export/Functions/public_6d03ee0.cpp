#include "Server-PCH.h"

PROC_DECLARE(0x6d03ee0, internal_6d03ee0, public_6d03ee0);
extern "C" NAKED register_t __cdecl internal_6d03ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        dec eax
        mov dword ptr ds : [ecx+0x14], eax
        ret 
        UNREACHABLE_TRAP(0x6d03ee0)
    }
}
