#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daffa0, internal_6daffa0, public_6daffa0);
extern "C" NAKED register_t __cdecl internal_6daffa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6710]
        mov dword ptr ds : [public_6dbc514], eax
        ret 
        UNREACHABLE_TRAP(0x6daffa0)
    }
}
