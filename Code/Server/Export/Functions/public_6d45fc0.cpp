#include "Server-PCH.h"

PROC_DECLARE(0x6d45fc0, internal_6d45fc0, public_6d45fc0);
extern "C" NAKED register_t __cdecl internal_6d45fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ae28]
        mov dword ptr ds : [public_6d902e4], eax
        ret 
        UNREACHABLE_TRAP(0x6d45fc0)
    }
}
