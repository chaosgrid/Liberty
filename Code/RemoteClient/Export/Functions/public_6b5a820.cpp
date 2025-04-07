#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5a820, internal_6b5a820, public_6b5a820);
extern "C" NAKED register_t __cdecl internal_6b5a820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5d4]
        mov dword ptr ds : [public_6b741ac], eax
        ret 
        UNREACHABLE_TRAP(0x6b5a820)
    }
}
