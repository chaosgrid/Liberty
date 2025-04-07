#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7010, internal_6da7010, public_6da7010);
extern "C" NAKED register_t __cdecl internal_6da7010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61f4]
        mov dword ptr ds : [public_6dbc094], eax
        ret 
        UNREACHABLE_TRAP(0x6da7010)
    }
}
