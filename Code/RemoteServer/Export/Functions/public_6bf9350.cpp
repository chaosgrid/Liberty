#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9350, internal_6bf9350, public_6bf9350);
extern "C" NAKED register_t __cdecl internal_6bf9350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e264]
        mov dword ptr ds : [public_6c13efc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9350)
    }
}
