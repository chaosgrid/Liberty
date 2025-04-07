#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b110, internal_6b5b110, public_6b5b110);
extern "C" NAKED register_t __cdecl internal_6b5b110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5f8]
        mov dword ptr ds : [public_6b741dc], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b110)
    }
}
