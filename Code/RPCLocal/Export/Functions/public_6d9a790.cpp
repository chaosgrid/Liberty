#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9a790, internal_6d9a790, public_6d9a790);
extern "C" NAKED register_t __cdecl internal_6d9a790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4084]
        mov dword ptr ds : [public_6dbbf04], eax
        ret 
        UNREACHABLE_TRAP(0x6d9a790)
    }
}
