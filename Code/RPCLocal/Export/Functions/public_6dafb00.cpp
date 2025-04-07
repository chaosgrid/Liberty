#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dafb00, internal_6dafb00, public_6dafb00);
extern "C" NAKED register_t __cdecl internal_6dafb00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6708]
        mov dword ptr ds : [public_6dbc4fc], eax
        ret 
        UNREACHABLE_TRAP(0x6dafb00)
    }
}
