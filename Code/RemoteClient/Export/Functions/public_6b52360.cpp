#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52360, internal_6b52360, public_6b52360);
extern "C" NAKED register_t __cdecl internal_6b52360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3b0]
        mov dword ptr ds : [public_6b73f70], eax
        ret 
        UNREACHABLE_TRAP(0x6b52360)
    }
}
