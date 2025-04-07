#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6324e50);

PROC_DECLARE(0x6324e50, internal_6324e50, public_6324e50);
extern "C" NAKED register_t __cdecl internal_6324e50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2C], eax
        mov dword ptr ds : [ecx+0x30], edx
        ret 8
        UNREACHABLE_TRAP(0x6324e50)
    }
}
