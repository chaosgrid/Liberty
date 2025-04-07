#include "Server-PCH.h"

PROC_DECLARE(0x6d2f9b0, internal_6d2f9b0, public_6d2f9b0);
extern "C" NAKED register_t __cdecl internal_6d2f9b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        cmp word ptr ds : [edx], ax
        sete al
        ret 4
        UNREACHABLE_TRAP(0x6d2f9b0)
    }
}
