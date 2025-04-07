#include "Server-PCH.h"

PROC_DECLARE(0x6cf7b00, internal_6cf7b00, public_6cf7b00);
extern "C" NAKED register_t __cdecl internal_6cf7b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66b0c]
        mov dword ptr ds : [public_6d8d85c], eax
        ret 
        UNREACHABLE_TRAP(0x6cf7b00)
    }
}
