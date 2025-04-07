#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d96400, internal_6d96400, public_6d96400);
extern "C" NAKED register_t __cdecl internal_6d96400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3e14]
        mov dword ptr ds : [public_6dbbe28], eax
        ret 
        UNREACHABLE_TRAP(0x6d96400)
    }
}
