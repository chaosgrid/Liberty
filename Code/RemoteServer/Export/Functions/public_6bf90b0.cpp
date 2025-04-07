#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf90b0, internal_6bf90b0, public_6bf90b0);
extern "C" NAKED register_t __cdecl internal_6bf90b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e258]
        mov dword ptr ds : [public_6c13ee4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf90b0)
    }
}
