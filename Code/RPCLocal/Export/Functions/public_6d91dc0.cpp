#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91dc0, internal_6d91dc0, public_6d91dc0);
extern "C" NAKED register_t __cdecl internal_6d91dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d48]
        mov dword ptr ds : [public_6dbbdd8], eax
        ret 
        UNREACHABLE_TRAP(0x6d91dc0)
    }
}
