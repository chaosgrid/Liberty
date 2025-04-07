#include "Common-PCH.h"

PROC_DECLARE(0x62feae0, internal_62feae0, public_62feae0);
extern "C" NAKED register_t __cdecl internal_62feae0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov al, 1
        mov byte ptr ds : [ecx+0x2EB], al
        mov dword ptr ds : [ecx+0x2E4], edx
        mov byte ptr ds : [ecx+0x2E9], al
        ret 4
        UNREACHABLE_TRAP(0x62feae0)
    }
}
