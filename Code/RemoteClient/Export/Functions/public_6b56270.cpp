#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56270, internal_6b56270, public_6b56270);
extern "C" NAKED register_t __cdecl internal_6b56270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4f8]
        mov dword ptr ds : [public_6b740c0], eax
        ret 
        UNREACHABLE_TRAP(0x6b56270)
    }
}
