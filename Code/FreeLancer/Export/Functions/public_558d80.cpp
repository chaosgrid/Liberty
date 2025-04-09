#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558d80);

PROC_DECLARE(0x558d80, internal_558d80, public_558d80);
extern "C" NAKED register_t __cdecl internal_558d80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor edx, edx
        mov dx, ax
        shr eax, 0x10
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx], edx
        ret 4
        UNREACHABLE_TRAP(0x558d80)
    }
}
