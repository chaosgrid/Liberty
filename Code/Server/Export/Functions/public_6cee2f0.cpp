#include "Server-PCH.h"

PROC_DECLARE(0x6cee2f0, internal_6cee2f0, public_6cee2f0);
extern "C" NAKED register_t __cdecl internal_6cee2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65754]
        mov dword ptr ds : [public_6d8d718], eax
        ret 
        UNREACHABLE_TRAP(0x6cee2f0)
    }
}
