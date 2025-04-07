#include "Server-PCH.h"

PROC_DECLARE(0x6cf4ef0, internal_6cf4ef0, public_6cf4ef0);
extern "C" NAKED register_t __cdecl internal_6cf4ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66970]
        mov dword ptr ds : [public_6d8d7c8], eax
        ret 
        UNREACHABLE_TRAP(0x6cf4ef0)
    }
}
