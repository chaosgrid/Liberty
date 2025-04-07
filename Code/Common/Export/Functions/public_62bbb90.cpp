#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb90);

PROC_DECLARE(0x62bbb90, internal_62bbb90, public_62bbb90);
extern "C" NAKED register_t __cdecl internal_62bbb90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dx, word ptr ds : [eax]
        cmp dx, word ptr ds : [ecx]
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x62bbb90)
    }
}
