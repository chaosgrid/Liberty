#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bee700, internal_6bee700, public_6bee700);
extern "C" NAKED register_t __cdecl internal_6bee700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0deb4]
        mov dword ptr ds : [public_6c13be4], eax
        ret 
        UNREACHABLE_TRAP(0x6bee700)
    }
}
