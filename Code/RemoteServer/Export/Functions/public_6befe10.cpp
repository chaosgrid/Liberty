#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6befe10, internal_6befe10, public_6befe10);
extern "C" NAKED register_t __cdecl internal_6befe10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df34]
        mov dword ptr ds : [public_6c13c44], eax
        ret 
        UNREACHABLE_TRAP(0x6befe10)
    }
}
