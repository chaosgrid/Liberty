#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbbb0);

PROC_DECLARE(0x62bbbb0, internal_62bbbb0, public_62bbbb0);
extern "C" NAKED register_t __cdecl internal_62bbbb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dx, word ptr ds : [eax]
        cmp word ptr ds : [ecx], dx
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x62bbbb0)
    }
}
