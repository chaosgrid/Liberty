#include "THORN-PCH.h"

PROC_DECLARE(0x6f4bc30, internal_6f4bc30, public_6f4bc30);
extern "C" NAKED register_t __cdecl internal_6f4bc30()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x38]
        mov dword ptr ds : [ecx+0x38], edx
        ret 
        UNREACHABLE_TRAP(0x6f4bc30)
    }
}
