#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3b720, internal_6b3b720, public_6b3b720);
extern "C" NAKED register_t __cdecl internal_6b3b720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6bf6c]
        mov dword ptr ds : [public_6b73d98], eax
        ret 
        UNREACHABLE_TRAP(0x6b3b720)
    }
}
