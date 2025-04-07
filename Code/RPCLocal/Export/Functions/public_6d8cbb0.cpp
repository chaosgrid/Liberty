#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cbb0, internal_6d8cbb0, public_6d8cbb0);
extern "C" NAKED register_t __cdecl internal_6d8cbb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db394c]
        mov dword ptr ds : [public_6dbbb88], eax
        ret 
        UNREACHABLE_TRAP(0x6d8cbb0)
    }
}
