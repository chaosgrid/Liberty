#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd1080, internal_6bd1080, public_6bd1080);
extern "C" NAKED register_t __cdecl internal_6bd1080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c137c0]
        ret 
        UNREACHABLE_TRAP(0x6bd1080)
    }
}
