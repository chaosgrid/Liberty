#include "Common-PCH.h"

PROC_DECLARE(0x6329a00, internal_6329a00, public_6329a00);
extern "C" NAKED register_t __cdecl internal_6329a00()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a442c
        mov word ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x6329a00)
    }
}
