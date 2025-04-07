#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c03870, internal_6c03870, public_6c03870);
extern "C" NAKED register_t __cdecl internal_6c03870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4e4]
        mov dword ptr ds : [public_6c141b4], eax
        ret 
        UNREACHABLE_TRAP(0x6c03870)
    }
}
