#include "Server-PCH.h"

PROC_DECLARE(0x6cf5180, internal_6cf5180, public_6cf5180);
extern "C" NAKED register_t __cdecl internal_6cf5180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66978]
        mov dword ptr ds : [public_6d8d7f0], eax
        ret 
        UNREACHABLE_TRAP(0x6cf5180)
    }
}
