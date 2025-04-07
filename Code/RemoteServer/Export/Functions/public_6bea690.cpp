#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bea690, internal_6bea690, public_6bea690);
extern "C" NAKED register_t __cdecl internal_6bea690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0d13c]
        mov dword ptr ds : [public_6c13b98], eax
        ret 
        UNREACHABLE_TRAP(0x6bea690)
    }
}
