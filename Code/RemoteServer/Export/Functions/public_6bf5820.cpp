#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5820, internal_6bf5820, public_6bf5820);
extern "C" NAKED register_t __cdecl internal_6bf5820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0ec]
        mov dword ptr ds : [public_6c13db4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5820)
    }
}
