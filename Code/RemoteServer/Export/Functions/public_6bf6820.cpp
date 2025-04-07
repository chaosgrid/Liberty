#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6820, internal_6bf6820, public_6bf6820);
extern "C" NAKED register_t __cdecl internal_6bf6820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e14c]
        mov dword ptr ds : [public_6c13e14], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6820)
    }
}
