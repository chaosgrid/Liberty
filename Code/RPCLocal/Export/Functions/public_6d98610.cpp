#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98610, internal_6d98610, public_6d98610);
extern "C" NAKED register_t __cdecl internal_6d98610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3fa8]
        mov dword ptr ds : [public_6dbbea0], eax
        ret 
        UNREACHABLE_TRAP(0x6d98610)
    }
}
