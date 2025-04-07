#include "Server-PCH.h"

PROC_DECLARE(0x6d45140, internal_6d45140, public_6d45140);
extern "C" NAKED register_t __cdecl internal_6d45140()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x40]
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6d45140)
    }
}
