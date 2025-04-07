#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef5d0, internal_6bef5d0, public_6bef5d0);
extern "C" NAKED register_t __cdecl internal_6bef5d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df14]
        mov dword ptr ds : [public_6c13c34], eax
        ret 
        UNREACHABLE_TRAP(0x6bef5d0)
    }
}
