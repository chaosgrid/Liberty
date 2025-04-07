#include "FLServer-PCH.h"

PROC_DECLARE(0x406550, internal_406550, public_406550);
extern "C" NAKED register_t __cdecl internal_406550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c618]
        mov dword ptr ds : [public_4261c8], eax
        ret 
        UNREACHABLE_TRAP(0x406550)
    }
}
