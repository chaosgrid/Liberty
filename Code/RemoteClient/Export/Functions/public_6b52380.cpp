#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52380, internal_6b52380, public_6b52380);
extern "C" NAKED register_t __cdecl internal_6b52380()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3b4]
        mov dword ptr ds : [public_6b73f6c], eax
        ret 
        UNREACHABLE_TRAP(0x6b52380)
    }
}
