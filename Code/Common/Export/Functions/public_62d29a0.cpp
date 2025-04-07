#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d29a0);

PROC_DECLARE(0x62d29a0, internal_62d29a0, public_62d29a0);
extern "C" NAKED register_t __cdecl internal_62d29a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x118], eax
        mov dword ptr ds : [ecx+0x11C], edx
        ret 8
        UNREACHABLE_TRAP(0x62d29a0)
    }
}
