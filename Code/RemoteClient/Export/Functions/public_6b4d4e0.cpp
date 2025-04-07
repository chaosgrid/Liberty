#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b4d4e0, internal_6b4d4e0, public_6b4d4e0);
extern "C" NAKED register_t __cdecl internal_6b4d4e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6dce8]
        mov dword ptr ds : [public_6b73f10], eax
        ret 
        UNREACHABLE_TRAP(0x6b4d4e0)
    }
}
