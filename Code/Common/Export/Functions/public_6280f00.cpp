#include "Common-PCH.h"

PROC_DECLARE(0x6280f00, internal_6280f00, public_6280f00);
extern "C" NAKED register_t __cdecl internal_6280f00()
{
    __asm
    {
        mov eax, ecx
        mov cx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [eax], cx
        mov dword ptr ds : [eax+4], 0xBF800000
        mov dword ptr ds : [eax+8], 0
        ret 
        UNREACHABLE_TRAP(0x6280f00)
    }
}
