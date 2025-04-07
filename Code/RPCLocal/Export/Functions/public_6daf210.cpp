#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf210, internal_6daf210, public_6daf210);
extern "C" NAKED register_t __cdecl internal_6daf210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db666c]
        mov dword ptr ds : [public_6dbc4b4], eax
        ret 
        UNREACHABLE_TRAP(0x6daf210)
    }
}
