#include "Server-PCH.h"

PROC_DECLARE(0x6d2f990, internal_6d2f990, public_6d2f990);
extern "C" NAKED register_t __cdecl internal_6d2f990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        xor eax, eax
        cmp word ptr ds : [ecx], ax
        sete al
        ret 8
        UNREACHABLE_TRAP(0x6d2f990)
    }
}
