#include "Server-PCH.h"

PROC_DECLARE(0x6cee300, internal_6cee300, public_6cee300);
extern "C" NAKED register_t __cdecl internal_6cee300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65754]
        mov dword ptr ds : [public_6d8d714], eax
        ret 
        UNREACHABLE_TRAP(0x6cee300)
    }
}
