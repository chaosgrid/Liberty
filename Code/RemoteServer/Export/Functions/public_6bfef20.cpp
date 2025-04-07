#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfef20, internal_6bfef20, public_6bfef20);
extern "C" NAKED register_t __cdecl internal_6bfef20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3c0]
        mov dword ptr ds : [public_6c14038], eax
        ret 
        UNREACHABLE_TRAP(0x6bfef20)
    }
}
