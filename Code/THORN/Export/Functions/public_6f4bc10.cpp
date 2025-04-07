#include "THORN-PCH.h"

PROC_DECLARE(0x6f4bc10, internal_6f4bc10, public_6f4bc10);
extern "C" NAKED register_t __cdecl internal_6f4bc10()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x3C]
        mov dword ptr ds : [ecx+0x3C], edx
        ret 
        UNREACHABLE_TRAP(0x6f4bc10)
    }
}
