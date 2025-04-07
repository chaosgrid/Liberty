#include "FLServer-PCH.h"

PROC_DECLARE(0x4073e0, internal_4073e0, public_4073e0);
extern "C" NAKED register_t __cdecl internal_4073e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c8e4]
        mov dword ptr ds : [public_42624c], eax
        ret 
        UNREACHABLE_TRAP(0x4073e0)
    }
}
