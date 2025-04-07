#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c026f0, internal_6c026f0, public_6c026f0);
extern "C" NAKED register_t __cdecl internal_6c026f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e480]
        mov dword ptr ds : [public_6c14138], eax
        ret 
        UNREACHABLE_TRAP(0x6c026f0)
    }
}
