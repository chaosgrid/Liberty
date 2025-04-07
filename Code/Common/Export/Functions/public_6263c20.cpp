#include "Common-PCH.h"

PROC_DECLARE(0x6263c20, internal_6263c20, public_6263c20);
extern "C" NAKED register_t __cdecl internal_6263c20()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        mov ecx, dword ptr ss : [esp+4]
        cmp ax, word ptr ds : [ecx+2]
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x6263c20)
    }
}
