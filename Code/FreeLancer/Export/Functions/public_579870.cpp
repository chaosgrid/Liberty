#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579870);

PROC_DECLARE(0x579870, internal_579870, public_579870);
extern "C" NAKED register_t __cdecl internal_579870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x403], edx
        ret 4
        UNREACHABLE_TRAP(0x579870)
    }
}
