#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b4ef0, internal_4b4ef0, public_4b4ef0);
extern "C" NAKED register_t __cdecl internal_4b4ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d5438]
        mov dword ptr ds : [public_67227c], eax
        ret 
        UNREACHABLE_TRAP(0x4b4ef0)
    }
}
