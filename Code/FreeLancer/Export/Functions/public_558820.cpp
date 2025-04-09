#include "FreeLancer-PCH.h"

PROC_DECLARE(0x558820, internal_558820, public_558820);
extern "C" NAKED register_t __cdecl internal_558820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e144c]
        mov dword ptr ds : [public_6799d4], eax
        ret 
        UNREACHABLE_TRAP(0x558820)
    }
}
