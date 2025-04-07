#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8cc0, internal_6bf8cc0, public_6bf8cc0);
extern "C" NAKED register_t __cdecl internal_6bf8cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e228]
        mov dword ptr ds : [public_6c13eb4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8cc0)
    }
}
