#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06ad0, internal_6c06ad0, public_6c06ad0);
extern "C" NAKED register_t __cdecl internal_6c06ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5c4]
        mov dword ptr ds : [public_6c14258], eax
        ret 
        UNREACHABLE_TRAP(0x6c06ad0)
    }
}
