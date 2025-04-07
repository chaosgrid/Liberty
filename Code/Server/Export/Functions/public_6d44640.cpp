#include "Server-PCH.h"

PROC_DECLARE(0x6d44640, internal_6d44640, public_6d44640);
extern "C" NAKED register_t __cdecl internal_6d44640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ad68]
        mov dword ptr ds : [public_6d8fb04], eax
        ret 
        UNREACHABLE_TRAP(0x6d44640)
    }
}
