#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfb840, internal_6bfb840, public_6bfb840);
extern "C" NAKED register_t __cdecl internal_6bfb840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2ec]
        mov dword ptr ds : [public_6c13f68], eax
        ret 
        UNREACHABLE_TRAP(0x6bfb840)
    }
}
