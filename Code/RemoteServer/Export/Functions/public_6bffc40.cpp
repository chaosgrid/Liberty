#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bffc40, internal_6bffc40, public_6bffc40);
extern "C" NAKED register_t __cdecl internal_6bffc40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3f0]
        mov dword ptr ds : [public_6c14078], eax
        ret 
        UNREACHABLE_TRAP(0x6bffc40)
    }
}
