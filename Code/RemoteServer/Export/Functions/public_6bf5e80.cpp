#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5e80, internal_6bf5e80, public_6bf5e80);
extern "C" NAKED register_t __cdecl internal_6bf5e80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e108]
        mov dword ptr ds : [public_6c13dd8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5e80)
    }
}
