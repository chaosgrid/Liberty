#include "Server-PCH.h"

PROC_DECLARE(0x6cf3c80, internal_6cf3c80, public_6cf3c80);
extern "C" NAKED register_t __cdecl internal_6cf3c80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66490]
        mov dword ptr ds : [public_6d8d7bc], eax
        ret 
        UNREACHABLE_TRAP(0x6cf3c80)
    }
}
