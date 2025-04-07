#include "Server-PCH.h"

PROC_DECLARE(0x6d11870, internal_6d11870, public_6d11870);
extern "C" NAKED register_t __cdecl internal_6d11870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68328]
        mov dword ptr ds : [public_6d8e534], eax
        ret 
        UNREACHABLE_TRAP(0x6d11870)
    }
}
