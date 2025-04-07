#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98670, internal_6d98670, public_6d98670);
extern "C" NAKED register_t __cdecl internal_6d98670()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3fec]
        mov dword ptr ds : [public_6dbbeb4], eax
        ret 
        UNREACHABLE_TRAP(0x6d98670)
    }
}
