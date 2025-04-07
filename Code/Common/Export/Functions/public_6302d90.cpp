#include "Common-PCH.h"

PROC_DECLARE(0x6302d90, internal_6302d90, public_6302d90);
extern "C" NAKED register_t __cdecl internal_6302d90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a267c]
        mov dword ptr ds : [public_63fce04], eax
        ret 
        UNREACHABLE_TRAP(0x6302d90)
    }
}
