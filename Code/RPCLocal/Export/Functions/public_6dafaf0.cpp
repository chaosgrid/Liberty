#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dafaf0, internal_6dafaf0, public_6dafaf0);
extern "C" NAKED register_t __cdecl internal_6dafaf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6704]
        mov dword ptr ds : [public_6dbc504], eax
        ret 
        UNREACHABLE_TRAP(0x6dafaf0)
    }
}
