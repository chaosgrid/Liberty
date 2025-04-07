#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98a00, internal_6d98a00, public_6d98a00);
extern "C" NAKED register_t __cdecl internal_6d98a00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db400c]
        mov dword ptr ds : [public_6dbbec0], eax
        ret 
        UNREACHABLE_TRAP(0x6d98a00)
    }
}
