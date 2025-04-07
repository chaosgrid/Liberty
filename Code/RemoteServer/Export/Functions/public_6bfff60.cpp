#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfff60, internal_6bfff60, public_6bfff60);
extern "C" NAKED register_t __cdecl internal_6bfff60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3fc]
        mov dword ptr ds : [public_6c1408c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfff60)
    }
}
