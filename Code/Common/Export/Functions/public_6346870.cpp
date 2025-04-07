#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346870);

PROC_DECLARE(0x6346870, internal_6346870, public_6346870);
extern "C" NAKED register_t __cdecl internal_6346870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        ret 8
        UNREACHABLE_TRAP(0x6346870)
    }
}
