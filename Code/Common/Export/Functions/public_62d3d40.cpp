#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263bd0);

PROC_DECLARE(0x62d3d40, internal_62d3d40, public_62d3d40);
extern "C" NAKED register_t __cdecl internal_62d3d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+4], eax
        add ecx, 0x18
        jmp public_6263bd0
        UNREACHABLE_TRAP(0x62d3d40)
    }
}
