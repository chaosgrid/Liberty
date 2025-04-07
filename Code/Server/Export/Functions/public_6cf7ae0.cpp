#include "Server-PCH.h"

PROC_DECLARE(0x6cf7ae0, internal_6cf7ae0, public_6cf7ae0);
extern "C" NAKED register_t __cdecl internal_6cf7ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66b08]
        mov dword ptr ds : [public_6d8d864], eax
        ret 
        UNREACHABLE_TRAP(0x6cf7ae0)
    }
}
