#include "Server-PCH.h"

PROC_DECLARE(0x6cfdff0, internal_6cfdff0, public_6cfdff0);
extern "C" NAKED register_t __cdecl internal_6cfdff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66eec]
        mov dword ptr ds : [public_6d8d8c4], eax
        ret 
        UNREACHABLE_TRAP(0x6cfdff0)
    }
}
