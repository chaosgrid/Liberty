#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf0870, internal_6bf0870, public_6bf0870);
extern "C" NAKED register_t __cdecl internal_6bf0870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0df84]
        mov dword ptr ds : [public_6c13c88], eax
        ret 
        UNREACHABLE_TRAP(0x6bf0870)
    }
}
