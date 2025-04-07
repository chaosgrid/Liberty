#include "Server-PCH.h"

PROC_DECLARE(0x6cf4ed0, internal_6cf4ed0, public_6cf4ed0);
extern "C" NAKED register_t __cdecl internal_6cf4ed0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6696c]
        mov dword ptr ds : [public_6d8d7d0], eax
        ret 
        UNREACHABLE_TRAP(0x6cf4ed0)
    }
}
