#include "Server-PCH.h"

PROC_DECLARE(0x6d45fa0, internal_6d45fa0, public_6d45fa0);
extern "C" NAKED register_t __cdecl internal_6d45fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ae24]
        mov dword ptr ds : [public_6d902ec], eax
        ret 
        UNREACHABLE_TRAP(0x6d45fa0)
    }
}
