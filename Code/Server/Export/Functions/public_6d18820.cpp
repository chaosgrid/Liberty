#include "Server-PCH.h"

PROC_DECLARE(0x6d18820, internal_6d18820, public_6d18820);
extern "C" NAKED register_t __cdecl internal_6d18820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68664]
        mov dword ptr ds : [public_6d8e59c], eax
        ret 
        UNREACHABLE_TRAP(0x6d18820)
    }
}
