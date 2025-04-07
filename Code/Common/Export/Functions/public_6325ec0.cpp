#include "Common-PCH.h"

PROC_DECLARE(0x6325ec0, internal_6325ec0, public_6325ec0);
extern "C" NAKED register_t __cdecl internal_6325ec0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4548
        ret 
        UNREACHABLE_TRAP(0x6325ec0)
    }
}
