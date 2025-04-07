#include "Server-PCH.h"

PROC_DECLARE(0x6d44740, internal_6d44740, public_6d44740);
extern "C" NAKED register_t __cdecl internal_6d44740()
{
    __asm
    {
        mov dword ptr ds : [public_6d8fad4], 0
        mov dword ptr ds : [public_6d8facc], offset public_6d65bcc
        mov dword ptr ds : [public_6d8fad0], offset public_6d65bc4
        ret 
        UNREACHABLE_TRAP(0x6d44740)
    }
}
