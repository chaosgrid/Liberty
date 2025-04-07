#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5ae60, internal_6b5ae60, public_6b5ae60);
extern "C" NAKED register_t __cdecl internal_6b5ae60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5ec]
        mov dword ptr ds : [public_6b741cc], eax
        ret 
        UNREACHABLE_TRAP(0x6b5ae60)
    }
}
