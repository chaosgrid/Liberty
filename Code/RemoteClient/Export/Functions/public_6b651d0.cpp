#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b651d0, internal_6b651d0, public_6b651d0);
extern "C" NAKED register_t __cdecl internal_6b651d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e9b4]
        mov dword ptr ds : [public_6b74514], eax
        ret 
        UNREACHABLE_TRAP(0x6b651d0)
    }
}
