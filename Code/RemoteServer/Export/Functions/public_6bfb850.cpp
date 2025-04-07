#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfb850, internal_6bfb850, public_6bfb850);
extern "C" NAKED register_t __cdecl internal_6bfb850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e2ec]
        mov dword ptr ds : [public_6c13f6c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfb850)
    }
}
